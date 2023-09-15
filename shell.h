#ifndef SHELL_H
#define SHELL_H

/*---STANDARD LIBRARIES---*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

/*---MACROS---*/
#define DELIM " \t\r\n\a\""

extern char **environ;

/*---PROTOTYPES---*/
/*---shell.c---*/
void interactive_mode(void);
void non_interactive_mode(void);

/*---interactive.c---*/
char *read_line(void);
char **tokenize(char *str);
int exec(char **args);

/*---fork.c---*/
int process(char **args);

/*--non_interactive.c---*/
char *read_stream(void);

/*---custom_shell.c---*/
int execute_command(char *command);
int main(void);

/*--string_utils.c--*/
size_t custom_strlen(const char *str);
int custom_strcmp(const char *s1, const char *s2);
void print_environment(void);


#endif
