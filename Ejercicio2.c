#include <stdio.h>
#include <stdlib.h>
#include<fcntl.h> 
#include<errno.h> 
#include <unistd.h>
#include <string.h>

int main(){
    int fd = open("prueba.txt",O_WRONLY | O_APPEND);
    int rc = fork();
    int sz;
    if (rc < 0) {
        // fork failed; exit
        fprintf(stderr, "fork failed\n");
        printf("fd = %d\n", fd); 
        exit(1);
    } else if (rc == 0) {
        // child (new process)
        printf("hello, I am child (pid:%d)\n", (int) getpid());
        printf("fd = %d\n", fd); 
        sz = write(fd, "I am a child\n", strlen("I am a child\n")); 
    } else {
        // parent goes down this path (original process)
        printf("hello, I am parent of %d (pid:%d)\n",
            rc, (int) getpid());
            printf("fd = %d\n", fd); 
            sz = write(fd, "I am a parent\n", strlen("I am a parent\n")); 
    }
    
}
