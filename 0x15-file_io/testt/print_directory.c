#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
    char *token;
    char del[2] = ":";
    char *path = getenv("PATH");
    token = strtok(path, del);

    while (token != NULL)
    {
        printf("path is %s\n", token);
        token = strtok(NULL,del);
    }
    return(0);
}


