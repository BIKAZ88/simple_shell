#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

void view_pointer(void);
void print_f(const char *message);
void read_input(char *command, size_t size);
void exec_input(const char *command);




#endif /* SHELL_H */
