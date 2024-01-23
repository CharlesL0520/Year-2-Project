/*
 * Replace the following string of 0s with your student number
 * 000000000
 */
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include "jobqueue.h"

/* 
 * DO NOT EDIT the jobqueue_init function.
 */
void jobqueue_init(jobqueue_t* jq) {
    jq->head = 0;
    jq->tail = 0;
    jq->buf_size = QUEUE_SIZE;
    
    for (int i = 0; i < jq->buf_size; i++)
        job_init(&jq->jobs[i]);
}

/* 
 * TODO: you must implement this function that allocates a job queue and 
 * initialise it.
 */
jobqueue_t* jobqueue_new() {
	jobqueue_t* Q = malloc(sizeof(jobqueue_t));
	if(!Q) return NULL;
	jobqueue_init(Q);
    return Q;
}

/* 
 * TODO: you must implement this function.
 */
size_t jobqueue_capacity(jobqueue_t* jq) {
	if(!jq) return 0;
	
    return jq->buf_size - 1;
}

/* 
 * TODO: you must implement this function.
 * Hints
 * - read the documentation in jobqueue.h carefully. Pay particular attention
 *      to what the documentation says about NULL jq or dst parameters and
 *      copying jobs
 * - be careful to update the queue correctly before returning the pointer
 *      to the dequeued job
 * - note there are relevant job functions to help with the implementation of 
 *      this function 
 */
job_t* jobqueue_dequeue(jobqueue_t* jq, job_t* dst) {
	if (!jq || jobqueue_is_empty(jq)) {
        return NULL;
	}
	
	dst = job_copy(dst, &jq->jobs[jq->head]);
	if(!dst) {
		return NULL;
	}
	
	memset(&jq->jobs[jq->head], 0, sizeof(job_t));
	
	jq->head = (jq->head + 1) % jq->buf_size;
	
    return dst;
}

/* 
 * DO NOT EDIT the jobqueue_enqueue function.
 */
void jobqueue_enqueue(jobqueue_t* jq, job_t* job) {
    if (!job || jobqueue_is_full(jq))
        return;
        
    (void) job_copy(&jq->jobs[jq->tail], job);

    jq->tail = (jq->tail + 1) % jq->buf_size;
}
   
/* 
 * DO NOT EDIT the jobqueue_is_empty function.
 */
bool jobqueue_is_empty(jobqueue_t* jq) {
    return !jq || jq->head == jq->tail;
}

/* 
 * TODO: you must implement this function.
 */
bool jobqueue_is_full(jobqueue_t* jq) {
	if(!jq) return true;
	
	int size = (jq->tail + jq->buf_size - jq->head) % jq->buf_size;
	if(size >= jobqueue_capacity(jq)) {
		return true;
	}
	
    return false;
}

/* 
 * DO NOT EDIT the jobqueue_peekhead function.
 */
job_t* jobqueue_peekhead(jobqueue_t* jq, job_t* dst) {
    return jobqueue_is_empty(jq) ? NULL : job_copy(dst, &jq->jobs[jq->head]);
}

/* 
 * TODO: you must implement this function.
 *
 * Hints
 * - this is not quite as obvious as the peekhead function because the buffer
 *      tail index gives the position of the next available slot, not the slot
 *      for the job at the end of the queue
 * - remember the buffer wraps round and so the tail could be the position
 *      behind element 0 in the buffer etc
 * - even given the above, the index of the job at the tail is a function 
 *      of the current tail value and the buffer size (i.e. it can be 
 *      calculated from those values)
 */
job_t* jobqueue_peektail(jobqueue_t* jq, job_t* dst) {
    return jobqueue_is_empty(jq) ? NULL : job_copy(dst, &jq->jobs[(jq->tail + jq->buf_size - 1) % jq->buf_size]);
}

/* 
 * TODO: you must implement this function.
 */
void jobqueue_delete(jobqueue_t* jq) {
	if(jq) {
		free(jq);
	}
    return;
}
