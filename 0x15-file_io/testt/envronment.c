#include <stdio.h>
#include <unistd.h>
#include<stdlib.h>

extern char **environ;

int main (int ac, char **av, char **env)
{
    
    printf ("address of env %u\n", &env);
    printf ("address of global environ %u\n", &environ);

    return (0);
}