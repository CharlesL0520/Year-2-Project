/*
 * Replace the following string of 0s with your student number
 * 000000000
 */
#include <stdlib.h>
#include <string.h>
#include "job.h"

/* 
 * DO NOT EDIT the job_new function.
 */
job_t* job_new(pid_t pid, unsigned int id, const char* label) {
    return job_set((job_t*) malloc(sizeof(job_t)), pid, id, label);
}

/* 
 * TODO: you must implement this function
 * Hint:
 * - look for other functions in this file that you can use to implement 
 *      this function
 */
job_t* job_copy(job_t* dst, job_t* src) {
	if(!src) return NULL;
	if(src == dst) return src;
	if(!dst) {
		dst = (job_t*) malloc(sizeof(job_t));
	}
	if(!dst) return NULL;
	memcpy(dst, src, sizeof(*src));
    return dst;
}

/* 
 * TODO: you must complete the implementation of this function, which 
 * currently only sets the pid and id fields of a job to zero.
 */
void job_init(job_t* job) {
	if(job) {
		job->pid = 0;
		job->id = 0;
		memset(job->label, 0, sizeof(job->label));
	}
}

/* 
 * TODO: you must complete the implementation of this function, which 
 * currently only compares the pid and id fields of a job.
 */
bool job_is_equal(job_t* j1, job_t* j2) {
	if(!j1 && !j2) return true;
	if(!j1 || !j2) return false;
	if(j1->pid != j2->pid) return false;
	if(j1->id != j2->id) return false;
    return strcmp(j1->label, j2->label) == 0;
}

/*
 * TODO: you must implement this function.
 * Hint:
 * - read the information in job.h about padding and truncation of job labels
 */
job_t* job_set(job_t* job, pid_t pid, unsigned int id, const char* label) {
	if(!job) return NULL;
	
	job->pid = pid;
	job->id = id;
	memset(job->label, PAD_CHAR, sizeof(job->label));
	job->label[sizeof(job->label) - 1] = 0;
	
	
	if(label) {
		int len = strlen(label);
		if(len > sizeof(job->label) - 1) {
			len = sizeof(job->label) - 1;
		}
		strncpy(job->label, label, len);
	}
    return job;
}

/* 
 * TODO: you must implement this function
 * Hint:
 * - look at the allocation of a job in job_new
 */
void job_delete(job_t* job) {
	if(job) {
		free(job);
	}
    return;
}