#include "shell.h"

/**
 * main - implements a simple shell
 *
 * Return: EXIT_SUCCESS.
 */

int main(void)
{
char command[120];
while (true)
{
view_pointer(void);
read_input(char *command, size_t size);
exec_input(const char *command);
}
return (0);
}
