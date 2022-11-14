/* This header file defines all the user-space threading functions. */

void uthread_init(void);
void uthread_create(void (*func) (void*), void* arg);
void uthread_exit(void);
void uthread_yield(void);
