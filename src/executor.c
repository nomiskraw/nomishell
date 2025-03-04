#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include "shell.h"

/*

 This code describes the function that executes an analyzed command, explains the fork process 
 and how the command is executed in the child process.

*/

void execute_command(char* command) {
    int arg_count;
    // Parse the command into arguments
    char** args = parse_command(command, &arg_count);

    // If no arguments, free memory and return
    if (arg_count == 0) {
        free(args);
        return;
    }

    // Fork to create a new process
    pid_t pid = fork();
    if (pid == 0) {
        // Child process: execute the command
        if (execvp(args[0], args) == -1) {
            perror("Command not found");
        }
        exit(EXIT_FAILURE);
    } else if (pid < 0) {
        // Fork failed
        perror("Fork failed");
    } else {
        // Parent process: wait for the child process to finish
        wait(NULL);
    }

    // Free the allocated memory for arguments
    free(args);
}