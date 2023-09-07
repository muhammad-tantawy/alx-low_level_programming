#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/wait.h>



int main (void)
{
    pid_t child_pid;
    pid_t parent;
    int status;

    
    child_pid = fork();
    if (child_pid == 0)
        sleep(3);
    else
        wait(&status);
    


    return (0);
}

