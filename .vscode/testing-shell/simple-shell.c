#include"header.h"

int main(int argc, char *argv[], char *env[]) 
{
char cmd[MAX_CMD_LEN];
    char *args[MAX_ARGS];
    pid_t pid;
    int status;
    int i = 0;

    if (argc > 1) {
        if ((pid = fork()) < 0) {
            printf("Fork error\n");
            exit(1);
        } else if (pid == 0) { 
            if (execve(argv[1], &argv[1], env) < 0) {
                printf("Exec error\n");
                exit(1);
            }
        } else { 
            while (wait(&status) != pid);
        }
    } else {

        while (1) {
            printf(">simshell ");

            if (fgets(cmd, sizeof(cmd), stdin) == NULL) {
                break;
            }

            cmd[my_strlen(cmd) - 1] = '\0';


            int i = 0;
            args[i] = strtok(cmd, " ");
            while (args[i] != NULL) {
                args[++i] = strtok(NULL, " ");
            }

            if (my_strcmp(args[0], "exit") == 0) {
                break;
            }

            if ((pid = fork()) < 0) 
            {
                printf("Fork error\n");
                exit(1);
            } 
            else if (pid == 0) 
            {
                if (execve(args[0], args, env) < 0) 
                {
                    printf("%s: not found\n",args[0]);
                    exit(1);
                }
            } 
            else 
            {   
                while (wait(&status) != pid);
            }
        }

    }
        return 0;
}
    
