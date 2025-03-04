#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shell.h"

/*

 This code describes the function that splits the command line into arguments 
 and explains the memory allocation and loop that runs through the command.

*/

char** parse_command(char* command, int* arg_count) {
    // Allocate memory for the arguments array
    char** args = malloc(256 * sizeof(char*));
    char* token = strtok(command, " ");
    int count = 0;

    // Loop through the command and split it by spaces
    while (token != NULL) {
        args[count] = token;
        count++;
        token = strtok(NULL, " ");
    }
    // End the arguments array with NULL
    args[count] = NULL;
    *arg_count = count;
    return args;
}
