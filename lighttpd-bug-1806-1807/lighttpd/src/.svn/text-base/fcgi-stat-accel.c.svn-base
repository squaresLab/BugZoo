/*
  compile with: 

  $ gcc -lfcgi -lpthread fcgi-stat-accel.c -o fcgi-stat-accel

  fcgi-stat-accel will use the PHP_FCGI_CHILDREN environment variable to set the thread count.

  The default value, if spawned from lighttpd, is 20.
*/

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <sys/types.h>
#include <sys/stat.h>

#ifdef HAVE_PTHREAD_H
#include <pthread.h>
#endif
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif
#include <string.h>
#include <fcntl.h>

#include <stdlib.h>
#ifdef HAVE_FASTCGI_FASTCGI_H
#include <fastcgi/fcgiapp.h>
#elif defined (HAVE_FASTCGI_H)
#include <fcgiapp.h>
#endif

#define THREAD_COUNT 20

#define FORBIDDEN(stream) \
        FCGX_FPrintF(stream, "Status: 403 Forbidden\r\nContent-Type: text/html\r\n\r\n<h1>403 Forbidden</h1>\n");
#define NOTFOUND(stream, filename) \
        FCGX_FPrintF(stream, "Status: 404 Not Found\r\nContent-Type: text/html\r\n\r\n<h1>404 Not Found</h1>\r\n%s", filename);
#define SENDFILE(stream, filename) \
        FCGX_FPrintF(stream, "X-LIGHTTPD-send-file: %s\r\n\r\n", filename); 


static void *doit(void *a){
        FCGX_Request request;
        int rc;
        char *filename;

        FCGX_InitRequest(&request, 0, /* FCGI_FAIL_ACCEPT_ON_INTR */ 0);

        while(1){
		int fd;
                //Some platforms require accept() serialization, some don't. The documentation claims it to be thread safe
//              static pthread_mutex_t accept_mutex = PTHREAD_MUTEX_INITIALIZER;
//              pthread_mutex_lock(&accept_mutex);
                rc = FCGX_Accept_r(&request);
//              pthread_mutex_unlock(&accept_mutex);

                if(rc < 0)
                        break;

        //get the filename
                if((filename = FCGX_GetParam("SCRIPT_FILENAME", request.envp)) == NULL){
                        FORBIDDEN(request.out);
        //don't try to open directories
                }else if(filename[strlen(filename)-1] == '/'){
                        FORBIDDEN(request.out);
        //open the file
                }else if((fd = open(filename, O_RDONLY)) == -1){
                        NOTFOUND(request.out, filename);
        //no error, serve it
                }else{
                        SENDFILE(request.out, filename);

                        close(fd);
                }

                FCGX_Finish_r(&request);
        }
        return NULL;
}

int main(void){
        int i,j,thread_count;
        pthread_t* id;
        char* env_val;

        FCGX_Init();

        thread_count = THREAD_COUNT;
        env_val = getenv("PHP_FCGI_CHILDREN");
        if (env_val != NULL) {
                j = atoi(env_val);
                if (j != 0) {
                        thread_count = j;
                };
        };

        id = malloc(sizeof(*id) * thread_count);

        for (i = 0; i < thread_count; i++) {
                pthread_create(&id[i], NULL, doit, NULL);
        }

	/* block the current thread by executing one */
        doit(NULL);
	
	for (i = 0; i < thread_count; i++) {
                pthread_join(id[i], NULL);
        }

        free(id);

        return 0;
}

