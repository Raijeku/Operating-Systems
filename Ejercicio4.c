#include <stdio.h>
#include <stdlib.h>
#include<fcntl.h> 
#include<errno.h> 
#include <unistd.h>
#include <string.h>

int main(){
    int rc = fork();
    if (rc < 0) {
        // fork failed; exit
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0) {
        // child (new process)
        printf("hello, I am child (pid:%d)\n", (int) getpid());
        execl("/bin/ls", "ls", "-l", (char *)0);
        execle("/bin/ls", "ls", "-l", (char *)0);
        execlp("/bin/ls", "ls", "-l", (char *)0);
        execv("/bin/ls", "ls", "-l", (char *)0);
        execvp("/bin/ls", "ls", "-l", (char *)0);
        execvpe("/bin/ls", "ls", "-l", (char *)0);
    } else {
        // parent goes down this path (original process)
        printf("hello, I am parent of %d (pid:%d)\n",
            rc, (int) getpid());
        execl("/bin/ls", "ls", "-l", (char *)0);
        execle("/bin/ls", "ls", "-l", (char *)0);
        execlp("/bin/ls", "ls", "-l", (char *)0);
        execv("/bin/ls", "ls", "-l", (char *)0);
        execvp("/bin/ls", "ls", "-l", (char *)0);
        execvpe("/bin/ls", "ls", "-l", (char *)0);
    }
}