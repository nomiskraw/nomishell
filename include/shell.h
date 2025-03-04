#ifndef SHELL_H
#define SHELL_H

// Function to execute a parsed command
void execute_command(char* command);
// Function to split the command line into arguments
char** parse_command(char* command, int* arg_count);

#endif