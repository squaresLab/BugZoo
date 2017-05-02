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
Ele* new_ele(new_num) 
int new_num;
{	
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
    return (list);
}

/*-----------------------------------------------------------------------------
  append_ele
        appends the new_ele to the list. If list is null, a new
	list is created. The modified list is returned.
-----------------------------------------------------------------------------*/
List *append_ele(a_list, a_ele)
List *a_list;
Ele  *a_ele;
{
  if (!a_list)
      a_list = new_list();	/* make list without compare function */

  a_ele->prev = a_list->last;	/* insert at the tail */
  if (a_list->last)
    a_list->last->next = a_ele;
  else
    a_list->first = a_ele;
  a_list->last = a_ele;
  a_ele->next = NULL;
  a_list->mem_count++;
  return (a_list);
}

/*-----------------------------------------------------------------------------
  find_nth
        fetches the nth element of the list (count starts at 1)
-----------------------------------------------------------------------------*/
Ele *find_nth(f_list, n)
List *f_list;
int   n;
{
    Ele *f_ele;
    int i;

    if (!f_list)
	return NULL;
    f_ele = f_list->first;
    for (i=1; f_list && (i<n); i++) /* operand mutation */
	f_ele = f_ele->next;
    return f_ele;
}

/*-----------------------------------------------------------------------------
  del_ele
        deletes the old_ele from the list.
        Note: even if list becomes empty after deletion, the list
	      node is not deallocated.
-----------------------------------------------------------------------------*/
List *del_ele(d_list, d_ele)
List *d_list;
Ele  *d_ele;
{
    if (!d_list || !d_ele)
	return (NULL);
    
    if (d_ele->next)
	d_ele->next->prev = d_ele->prev;
    else
	d_list->last = d_ele->prev;
    if (d_ele->prev)
	d_ele->prev->next = d_ele->next;
    else
	d_list->first = d_ele->next;
    /* KEEP d_ele's data & pointers intact!! */
    d_list->mem_count--;
    return (d_list);
}

/*-----------------------------------------------------------------------------
   free_ele
       deallocate the ptr. Caution: The ptr should point to an object
       allocated in a single call to malloc.
-----------------------------------------------------------------------------*/
void free_ele(ptr)
Ele *ptr;
{
    free(ptr);
}

int alloc_proc_num;
int num_processes;
Ele* cur_proc;
List *prio_queue[MAXPRIO+1]; 	/* 0th element unused */
List *block_queue;

void
finish_process()
{
    schedule();
    if (cur_proc)
    {
	fprintf(stdout, "%d ", cur_proc->val);
	free_ele(cur_proc);
	num_processes--;
    }
}

void
finish_all_processes()
{
    int i;
    int total;
    total = num_processes;
    for (i=0; i<total; i++)
	finish_process();
}

schedule()
{
    int i;
    
    cur_proc = NULL;
    for (i=MAXPRIO; i > 0; i--)
    {
	if (prio_queue[i]->mem_count > 0)
	{
	    cur_proc = prio_queue[i]->first;
	    prio_queue[i] = del_ele(prio_queue[i], cur_proc);
	    return;
	}
    }
}

void
upgrade_process_prio(prio, ratio)
int prio;
float ratio;
{
    int count;
    int n;
    Ele *proc;
    List *src_queue, *dest_queue;
    
    if (prio >= MAXPRIO)
	return;
    src_queue = prio_queue[prio];
    dest_queue = prio_queue[prio+1];
    count = src_queue->mem_count;

    if (count > 0)
    {
	n = (int) (count*ratio + 1);
	proc = find_nth(src_queue, n);
	if (proc) {
	    src_queue = del_ele(src_queue, proc);
	    /* append to appropriate prio queue */
	    proc->priority = prio;
	    dest_queue = append_ele(dest_queue, proc);
	}
    }
}

void
unblock_process(ratio)
float ratio;
{
    int count;
    int n;
    Ele *proc;
    int prio;
    if (block_queue)
    {
	count = block_queue->mem_count;
	n = (int) (count*ratio + 1);
	proc = find_nth(block_queue, n);
	if (proc) {
	    block_queue = del_ele(block_queue, proc);
	    /* append to appropriate prio queue */
	    prio = proc->priority;
	    prio_queue[prio] = append_ele(prio_queue[prio], proc);
	}
    }
}

void quantum_expire()
{
    int prio;
    schedule();
    if (cur_proc)
    {
	prio = cur_proc->priority;
	prio_queue[prio] = append_ele(prio_queue[prio], cur_proc);
    }	
}
	
void
block_process()
{
    schedule();
    if (cur_proc)
    {
	block_queue = append_ele(block_queue, cur_proc);
    }
}

Ele * new_process(prio)
int prio;
{
    Ele *proc;
    proc = new_ele(alloc_proc_num++);
    proc->priority = prio;
    num_processes++;
    return proc;
}

void add_process(prio)
int prio;
{
    Ele *proc;
    proc = new_process(prio);
    prio_queue[prio] = append_ele(prio_queue[prio], proc);
}

void init_prio_queue(prio, num_proc)
int prio;
int num_proc;
{
    List *queue;
    Ele  *proc;
    int i;
    
    queue = new_list();
    for (i=0; i<num_proc; i++)
    {
	proc = new_process(prio);
	queue = append_ele(queue, proc);
    }
    prio_queue[prio] = queue;
}

void initialize()
{
    alloc_proc_num = 0;
    num_processes = 0;
}
				
/* test driver */
main(argc, argv)
int argc;
char *argv[];
{
    int command;
    int prio;
    float ratio;
    int status;

    if (argc < (MAXPRIO+1))
    {
	fprintf(stdout, "incorrect usage\n");
	return;
    }
    
    initialize();
    for (prio=MAXPRIO; prio >= 1; prio--)
    {
	init_prio_queue(prio, atoi(argv[prio]));
    }
    for (status = fscanf(stdin, "%d", &command);
	 ((status!=EOF) && status);
	 status = fscanf(stdin, "%d", &command))
    {
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
	    else 
		upgrade_process_prio(prio, ratio);
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

/* A simple input spec:
  
  a.out n3 n2 n1

  where n3, n2, n1 are non-negative integers indicating the number of
  initial processes at priority 3, 2, and 1, respectively.

  The input file is a list of commands of the following kinds:
   (For simplicity, comamnd names are integers (NOT strings)
    
  FINISH            ;; this exits the current process (printing its number)
  NEW_JOB priority  ;; this adds a new process at specified priority
  BLOCK             ;; this adds the current process to the blocked queue
  QUANTUM_EXPIRE    ;; this puts the current process at the end
                    ;;      of its prioqueue
  UNBLOCK ratio     ;; this unblocks a process from the blocked queue
                    ;;     and ratio is used to determine which one

  UPGRADE_PRIO small-priority ratio ;; this promotes a process from
                    ;; the small-priority queue to the next higher priority
                    ;;     and ratio is used to determine which process
 
  FLUSH	            ;; causes all the processes from the prio queues to
                    ;;    exit the system in their priority order

where
 NEW_JOB        1
 UPGRADE_PRIO   2 
 BLOCK          3
 UNBLOCK        4  
 QUANTUM_EXPIRE 5
 FINISH         6
 FLUSH          7
and priority is in        1..3
and small-priority is in  1..2
and ratio is in           0.0..1.0

 The output is a list of numbers indicating the order in which
 processes exit from the system.   

*/


