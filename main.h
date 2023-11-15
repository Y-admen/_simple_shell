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

void interactiv(char *list_arg);
void non_interactive (char *list_arg);


int check_built_in(char **arr, int *status, char *list_arg);
char *get_location(char *command);
int check_built_in(char **arr, int *status, char *list_arg);

char **process_env_var(char **arr, int status);
void remove_comment(char *str);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _putchar(char c);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);


int _strtock(char *str, const char *delimit);
ssize_t _get_line(char **lineptr, size_t *n, FILE *stream);

#endif
