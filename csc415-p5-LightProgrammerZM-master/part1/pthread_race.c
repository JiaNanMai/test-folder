#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>
#include <sys/time.h>

#define NUM_THREADS 10


/**	
 * Can use the following struct for
 * the nanosleep function.
 * the first value is sleep time in seconds
 * the second vaue is sleep time in nanoseconds.
 * 
 * struct timespec ts = {2, 0 };
 * 
 * you can call nano sleep as nanosleep(&ts, NULL);
*/

/* Created a global counter variable */
int globalCounter = 0;

struct timespec ts = {2, 0 };

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER; // Created and initialized a mutex global variable.



void *helloMessage(void *pointer) {
		
		
		int *threadIds = (int*) pointer;
		nanosleep(&ts, NULL);
		fprintf(stderr, "\bHello I'm thread #%d\n", *threadIds);
		fflush(stderr);
	
		pthread_mutex_lock(&mutex); // Added a mutex lock to fix race conditions.
	// Copying the value of the global counter into the local thread variable.
		int localVariable = globalCounter;
		
		nanosleep(&ts, NULL);
		fprintf(stderr, "\bI am thread #%d  read value             : %d\n", *threadIds, localVariable);
		fflush(stderr);
		
	// Increment localVariable by ten.
		nanosleep(&ts, NULL);
		localVariable = localVariable + 10;
		fprintf(stderr, "\bI am thread #%d  added 10 values is now : %d\n ", *threadIds, localVariable);
	
		fflush(stderr);
	
		nanosleep(&ts, NULL);
	
	// Copying to globalCounter copy.
	
		globalCounter = localVariable;
	
		free(threadIds);
		
		pthread_mutex_unlock(&mutex); // The thread will unlock mutex once it is finished.
		
		return NULL;
}
	
int main() {

		

		pthread_t threads[10];
		
		pthread_mutex_init(&mutex, NULL);
		
		int i = 0;
		int wait;
	
		int *pointer = &i;
		
		
	
	// Create independent threads that will execute on function call.
	for(i = 0; i < 10; i++) {
		
		
		
		int *argument = (int*) malloc(sizeof(int));
		
		*argument = i;
		
		wait = pthread_create(&threads[i], NULL, helloMessage, argument);
		
	}
	
	for (i = 0; i < 10; i++) {
		
		pthread_join(threads[i], NULL);
		
	}
	
	pthread_mutex_destroy(&mutex);
	// Print all threads to the console after execution.
	
		printf("\nFinal Global Value : %d", globalCounter);
	
		exit(EXIT_SUCCESS);
		return 0;
}
