#include <fcntl.h>
#include <unistd.h>
#include <iostream>
#include <stdio.h>
void file_io_test(void)
{
    if(lseek(STDIN_FILENO, 0, SEEK_CUR) == -1)
        std::cout<<"cannnot seek\n";
    else
        std::cout<<"seek ok \n";
}

void file_io_3d2()
{
    char buf1[] = "abcdefghij";
    char buf2[] = "ABCDEFGHIJ";
    int fd;
    if ( (fd = creat("file.hole", 666)) < 0 )
        printf("create error");

    if( write(fd, buf1, 10) != 10 )
        printf("buf1 write error");
    if( lseek(fd, 30000, SEEK_SET) == -1 )
        printf("lseek error");
    if( write(fd, buf2, 10) != 10)
        printf("buf2 write error");
}
#define BUFFSIZE 1024
void file_to_3d5_copy_file()
{
    int n = 0;
    char buf[BUFFSIZE];
    while( (n = read(STDIN_FILENO, buf, BUFFSIZE)) >0 )
        if(write(STDOUT_FILENO, buf, n) != n)
            printf("write buff error");

}



