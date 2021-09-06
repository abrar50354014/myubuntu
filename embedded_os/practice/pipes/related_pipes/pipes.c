#include<stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define SIZE 66

int main()
{
    unsigned char buff[SIZE];
    unsigned char buff2[SIZE];

    int pfd1[2];
    int pfd2[2];
    pid_t id ;

    pipe(pfd1);
    pipe(pfd2);
    id = fork();

    if(0 == id)
    {
        printf("Child\n");
        //reading from parent
        close(pfd1[1]);                         //close writing end
        read(pfd1[0],buff, SIZE);               //read data from reading end
        printf("Child: got data: %s\n", buff);  
        close(pfd1[0]);                         //close reading end
        //reply to parent
        close(pfd2[0]);
        write(pfd2[1], "hello parent\n", SIZE);
        close(pfd2[1]);
    }

    else
    {
        printf("parent\n");
        //writing to child
        close(pfd1[0]);
        write(pfd1[1], "hello child\n", SIZE);
        close(pfd1[0]);
        
        //response from child
        close(pfd2[1]);                         //close writing end
        read(pfd2[0],buff2, SIZE);               //read data from reading end
        printf("parent: got data: %s\n", buff2);  
        close(pfd2[0]); 

    }
    return 0;
}