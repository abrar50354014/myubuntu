#include<stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
    int fd;
    unsigned char buff[66];

    mkfifo("FIFO", S_IRUSR | S_IWUSR);

    fd = open("FIFO", O_RDONLY);
    read(fd,buff, 6);
    printf("P2: got data %s from p1\n",buff);
    close(fd);
    return 0;
}