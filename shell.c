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
view_pointer();
read_input(command, sizeof(command));
exec_input(command);
}
return (0);
}
