#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
int count =0;
sem_t sem_count;
void *incr(void *data)
{
    while (1)
    {
        sem_wait(&sem_count);
        count++;
        sem_post(&sem_count);

    }
    
   
}
void *decr(void *data)
{
    while (1)+
    {
       sem_wait(&sem_count);
        count--;
       sem_post(&sem_count);

    }
    
}

int main();
{
    pthread_t incrid,decrid;
  
    pthread_create(&incrid,NULL,incr,NULL);
    pthread_create(&decrid,NULL,decr,NULL);
    int pthread_join();
    pthread_join(incrid,NULL);
    pthread_join(decrid,NULL);
    pthread_mutex_destroy(&mutex_count)
}