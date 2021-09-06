#include<stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
    int fd;
    mkfifo("FIFO", S_IRUSR | S_IWUSR);
    fd = open("FIFO", O_WRONLY);
    write(fd, "hello\n", 6);
    close(fd);
    return 0;
}