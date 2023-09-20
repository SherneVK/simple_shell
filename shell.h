#ifndef SHELL_H
#define SHELL_H

/*---STANDARD LIBRARIES---*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <linux/limits.h>

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

/*---execute args---*/
int process(char **args);
int builtins_list(void);

/*--non_interactive.c---*/
char *read_stream(void);

/*---builtins---*/
int custom_cd(char **args);
int custom_exit(char **args);
int custom_env(char **args);



#endif
