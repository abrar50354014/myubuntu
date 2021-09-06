#include<stdio.h>
#include<pthread.h>
int count =0;
pthread_mutex_t mutex_count;
void *incr(void *data)
{
    while (1)
    {
        pthread_mutex_lock(&mutex_count);
        count++;ss
        pthread_mutex_unlock(&mutex_count);

    }
    
   
}
void *decr(void *data)
{
    while (1)
    {
        pthread_mutex_lock(&mutex_count);
        count--;
        pthread_mutex_unlock(&mutex_count);

    }
    
}

int main();
{
    pthread_t incrid,decrid;
    pthread_mutex_init(&mutex_count,NULL);
    pthread_create(&incrid,NULL,incr,NULL);
    pthread_create(&decrid,NULL,decr,NULL);
    int pthread_join();
    pthread_join(incrid,NULL);
    pthread_join(decrid,NULL);
    pthread_mutex_destroy(&mutex_count)
}