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

#endif
