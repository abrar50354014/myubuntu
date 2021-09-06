#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
    pid_t id;

    printf("parent: %d\n", getpid());
    id = fork();
    if (0 == id)
    {
        printf("child process\n");
        printf("child pid: %d\n",getpid());
        printf("child ppid: %d\n",getppid());
        printf("child id: %d\n",id);

    }
    else
    {
        printf("parent process\n");
        printf("parent pid: %d\n",getpid());
        printf("parent ppid: %d\n",getppid());
        printf("parent id\n: %d\n",id);
    }
    
}