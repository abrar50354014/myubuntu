#include<stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#define SIZE 50

int main()
{
    unsigned char buff1[SIZE];
    unsigned char buff2[SIZE];
    pid_t id;
    int pfd1[2];
    int pfd2[2];

    pipe(pfd1);
    pipe(pfd2);

    id = fork();

    if(0 == id)
    {
        printf("child\n");
        //read from parent

        close(pfd1[1]);
        read(pfd1[0],buff1,SIZE);
        close(pfd1[0]);
        //write to parent

        close(pfd1[0]);
        write(pfd1[1],"hello\n", SIZE);
        close(pfd1[1]);
    }

}