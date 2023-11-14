#include "shell.h"

void read_input(char *command, size_t size) {
if (fgets(command, size, stdin) == NULL) {
if (feof(stdin)) {
print_f("\n");
exit(EXIT_SUCCESS);
}
else {
print_f("Error while reading input.\n");
exit(EXIT_FAILURE);
}
}
command[strcspn(command, "\n")] = '\0'; // Remove newline
}
