#include<stdio.h>
#include<pthread.h>

void *some(void *data)
{
    printf("in thread\n");
}

int main()
{
    pthread_t pr_tid;
    printf("before thread\n");
    pthread_create(&pr_tid,NULL,some,NULL);
    int pthread_join();
    pthread_join(pr_tid,NULL);
    printf("thread joined\n");
    return 0;
}