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
char *read_line(void);
char **tokenize(char *str);
int exec(char **args);

/* execute_args */
int process(char **args);

char *read_stream(void);

#endif
