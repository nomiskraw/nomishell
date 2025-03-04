#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "shell.h"

/*

Main C file of my shell
This code creates a loop that keeps the shell running
and describes the display of the prompt and the reading of user input.

*/

int main() {
    char command[256];

    // Infinite loop to keep the shell running
    while (1) {
        // Display the shell prompt
        printf("nomishell> ");

        // Read the user input
        if (fgets(command, sizeof(command), stdin) == NULL) {
            break;
        }

        // Remove the newline character from the input
        command[strcspn(command, "\n")] = 0;

        // Parse and execute the command
        execute_command(command);
    }
    return 0;
}
