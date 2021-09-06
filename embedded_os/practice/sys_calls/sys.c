#include<stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>
#define MAX_SIZE 50
int main()
{
    int fd ;

    fd = open("write.txt",O_WRONLY | O_CREAT, S_IRUSR, S_IWUSR);
    if (-1 == fd)
    {
        perror("error opening file");
        exit(EXIT_FAILURE);
    }
    
    write(fd,"hello\n",6);
    close(fd);
    exit(EXIT_SUCCESS);


    //SYS READ
    fd = open(("write.txt"),O_RDONLY, S_IRUSR | S_IWUSR);
    if (-1 == fd);
    {
        perror("error opening file");
        exit(EXIT_FAILURE);
    }
    char buff [MAX_SIZE];
    read(fd, buff,MAX_SIZE);
    printf("Read data : %s\n", buff);
    close(fd);
    exit(EXIT_SUCCESS);


}