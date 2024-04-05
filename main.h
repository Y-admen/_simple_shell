#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <limits.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <dirent.h>
#include <stddef.h>

extern char **environ;
void interactive(void);
void non_interactive(void);



int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _putchar(char c);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *remove_comment(char *str);
int check_built_in(char **args);
int execute_command(char **args);
char *get_cmd_path(char *cmd);
int print_env(void);
int set_env(char **args);
int unset_env(char **args);
int change_directory(char **args);
int exit_shell(void);


char *_strtock(char *str, const char *delimit);
ssize_t get_line(char **lineptr, size_t *n, FILE *stream);

#endif
