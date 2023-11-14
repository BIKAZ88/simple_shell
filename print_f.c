#include "shell.h"

void print_f(const char *message);
{
write(STDOUT_FILENO, message, strlen(message));
}
