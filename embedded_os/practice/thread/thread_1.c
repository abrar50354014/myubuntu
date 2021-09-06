#include<stdio.h>
#include<pthread.h>

void *pressureThread(void *data)
{
    printf("in Thread\n");
}

int main()
{
    pthread_t pr_tid;

    printf("Before thread creation\n");
    pthread_create(&pr_tid, NULL,pressureThread, NULL);
    printf("After thread creation\n");

    return 0;
}