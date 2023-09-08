#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
extern char **environ;

char *_getenv(const char *name);

char *_getenv(const char *name)
{
    int i = 0;
    size_t len = strlen(name);

    while(environ[i] != NULL)
    {
        if (strncmp(name, environ[i], len) == 0 && environ[i][len] == '=')
        {
            return &environ[i][len + 1];
        }
        i++;
    } 
}
int main(void)
{
    char *name = "HOME";
    char *value = _getenv(name);
    printf("%s=%s\n", name, value);
    return (0);
}
