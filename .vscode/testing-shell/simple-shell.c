#include"header.h"

int main(int argc, char *argv[], char *env[]) 
{
char cmd[MAX_CMD_LEN];
    char *args[MAX_ARGS];
    pid_t pid;
    int status;
    int i = 0;

    if (argc > 1) {
        // Use command line arguments
        if ((pid = fork()) < 0) {
            printf("Fork error\n");
            exit(1);
        } else if (pid == 0) {  // child process
            if (execve(argv[1], &argv[1], env) < 0) {
                printf("Exec error\n");
                exit(1);
            }
        } else {  // parent process
            while (wait(&status) != pid);
        }
    } else {
        // Interactive mode
        while (1) {
            printf(">simple-shell ");

            // Get the command from the user
            if (fgets(cmd, sizeof(cmd), stdin) == NULL) {
                break;
            }

            cmd[my_strlen(cmd) - 1] = '\0';  // remove newline at the end

            // split command into arguments
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
                    printf("Please enter full path such as \"/bin/ls\" or pipe it in non-interactive\n");
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
    
