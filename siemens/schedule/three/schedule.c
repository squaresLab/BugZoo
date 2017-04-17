/*  -*- Last-Edit:  Wed May 7 10:12:52 1993 by Monica; -*- */


#include <stdio.h>

/* A job descriptor. */

#define NULL 0


#define NEW_JOB        1
#define UPGRADE_PRIO   2 
#define BLOCK          3
#define UNBLOCK        4  
#define QUANTUM_EXPIRE 5
#define FINISH         6
#define FLUSH          7

#define MAXPRIO 3

typedef struct _job {
    struct  _job *next, *prev; /* Next and Previous in job list. */
    int          val  ;         /* Id-value of program. */
    short        priority;     /* Its priority. */
} Ele, *Ele_Ptr;

typedef struct list		/* doubly linked list */
{
  Ele *first;
  Ele *last;
  int    mem_count;		/* member count */
} List;

/*-----------------------------------------------------------------------------
  new_ele
     alloates a new element with value as num.
-----------------------------------------------------------------------------*/
Ele* new_ele(int new_num) {	
    Ele *ele;

    ele =(Ele *)malloc(sizeof(Ele));
    ele->next = NULL;
    ele->prev = NULL;
    ele->val  = new_num;
    return ele;
}

/*-----------------------------------------------------------------------------
  new_list
        allocates, initializes and returns a new list.
        Note that if the argument compare() is provided, this list can be
            made into an ordered list. see insert_ele().
-----------------------------------------------------------------------------*/
List *new_list()
{
    List *list;

    list = (List *)malloc(sizeof(List));
    
    list->first = NULL;
    list->last  = NULL;
    list->mem_count = 0;
    return list;
}

/*-----------------------------------------------------------------------------
  append_ele
        appends the new_ele to the list. If list is null, a new
	list is created. The modified list is returned.
-----------------------------------------------------------------------------*/
List *append_ele(List *list, Ele *ele) {
  if (!list)
      list = new_list();
  ele->prev = list->last;
  if (list->last)
    // BUG:
    list->last->next = ele;
    // list->first = ele;
  else
    // BUG:
    list->first = ele;
    // list->last->next = ele;
  list->last = ele;
  //
  ele->next = NULL;
  list->mem_count = list->mem_count + 1;
  return list;
}

/*-----------------------------------------------------------------------------
  find_nth
        fetches the nth element of the list (count starts at 1)
-----------------------------------------------------------------------------*/
Ele *find_nth(List *list, int n) {
  Ele *ele;
  int i;

  if (!list)
    return NULL;

  ele = list->first;

  for (i=1; ele && (i<n); i++)
	    ele = ele->next;

  return ele;
}

/*-----------------------------------------------------------------------------
  del_ele
        deletes the old_ele from the list.
        Note: even if list becomes empty after deletion, the list
	      node is not deallocated.
-----------------------------------------------------------------------------*/
List *del_ele(List *list, Ele *ele) {
  if (!list || !ele)
	  return NULL;
    
  if (ele->next) {
	  ele->next->prev = ele->prev;
    // BUG: delete
    return list;
  } else {
    // BUG:
	  // list->last = ele->prev;
    list->first = ele->next;
  }
  
  if (ele->prev) {
	  ele->prev->next = ele->next;
  } else {
	  // BUG:
    // list->first = ele->next;
    list->last = ele->prev;
  }

  list->mem_count--;

  return list;
}

/*-----------------------------------------------------------------------------
   free_ele
       deallocate the ptr. Caution: The ptr should point to an object
       allocated in a single call to malloc.
-----------------------------------------------------------------------------*/
void free_ele(Ele *ptr) {
    free(ptr);
}

int alloc_proc_num;
int num_processes;
Ele* cur_proc;
List *prio_queue[MAXPRIO+1]; 	/* 0th element unused */
List *block_queue;

void finish_process() {
  schedule();
  if (cur_proc) {
    fprintf(stdout, "%d ", cur_proc->val);
    free_ele(cur_proc);
    num_processes--;
  }
}

void finish_all_processes() {
  int i;
  int total;
  total = num_processes;
  for (i=0; i<total; i++) {
    finish_process();
  }
}

schedule() {
  int i;

  cur_proc = NULL;
  for (i=MAXPRIO; i > 0; i--) {
    if (prio_queue[i]->mem_count > 0) {
      cur_proc = prio_queue[i]->first;
      prio_queue[i] = del_ele(prio_queue[i], cur_proc);
      return;
    }
  }
}

void upgrade_process_prio(int prio, float ratio) {
  int count;
  int n;
  Ele *proc;
  List *src_queue, *dest_queue;

  if (prio >= MAXPRIO) {
    return;
  }

  src_queue = prio_queue[prio];
  dest_queue = prio_queue[prio+1];
  count = src_queue->mem_count;

  if (count > 0) {
    n = (int) (count*ratio + 1);
    proc = find_nth(src_queue, n);
    if (proc) {
      src_queue = del_ele(src_queue, proc);
      proc->priority = prio;
      dest_queue = append_ele(dest_queue, proc);
    }
  }
}

void unblock_process(float ratio) {
  int count;
  int n;
  Ele *proc;
  int prio;

  if (block_queue) {
    count = block_queue->mem_count;
    n = (int) (count*ratio + 1);
    proc = find_nth(block_queue, n);
    if (proc) {
      block_queue = del_ele(block_queue, proc);
      prio = proc->priority;
      prio_queue[prio] = append_ele(prio_queue[prio], proc);
    }
  }
}

void quantum_expire() {
  int prio;
  schedule();
  if (cur_proc) {
    prio = cur_proc->priority;
    prio_queue[prio] = append_ele(prio_queue[prio], cur_proc);
  }	
}
	
void block_process() {
  schedule();
  if (cur_proc) {
    block_queue = append_ele(block_queue, cur_proc);
  }
}

Ele * new_process(int prio) {
  Ele *proc;
  proc = new_ele(alloc_proc_num++);
  proc->priority = prio;
  num_processes++;
  return proc;
}

void add_process(int prio) {
  Ele *proc;
  proc = new_process(prio);
  prio_queue[prio] = append_ele(prio_queue[prio], proc);
}

void init_prio_queue(int prio, int num_proc) {
  List *queue;
  Ele  *proc;
  int i;

  queue = new_list();
  for (i=0; i<num_proc; i++) {
    proc = new_process(prio);
    queue = append_ele(queue, proc);
  }

  prio_queue[prio] = queue;
}

void initialize() {
  alloc_proc_num = 0;
  num_processes = 0;
}
				
/* test driver */
main(int argc, char * argv[]) {
  int command;
  int prio;
  float ratio;
  int status;

  if (argc < (MAXPRIO+1)) {
    fprintf(stdout, "incorrect usage\n");
    return;
  }

  initialize();
  for (prio=MAXPRIO; prio >= 1; prio--) {
    init_prio_queue(prio, atoi(argv[prio]));
  }

  for (
      status = fscanf(stdin, "%d", &command);
      ((status!=EOF) && status);
      status = fscanf(stdin, "%d", &command)
  ) {
    switch(command)
    {
      case FINISH:
        finish_process();
        break;
      case BLOCK:
        block_process();
        break;
      case QUANTUM_EXPIRE:
        quantum_expire();
        break;
      case UNBLOCK:
        fscanf(stdin, "%f", &ratio);
        unblock_process(ratio);
        break;
      case UPGRADE_PRIO:
        fscanf(stdin, "%d", &prio);
        fscanf(stdin, "%f", &ratio);
        if (prio > MAXPRIO || prio <= 0) { 
          fprintf(stdout, "** invalid priority\n");
          return;
        }
        else {
          upgrade_process_prio(prio, ratio);
        }
        break;
      case NEW_JOB:
        fscanf(stdin, "%d", &prio);
        if (prio > MAXPRIO || prio <= 0) {
          fprintf(stdout, "** invalid priority\n");
          return;
        }
        else 
          add_process(prio);
        break;
      case FLUSH:
        finish_all_processes();
        break;
    }
  }
}
