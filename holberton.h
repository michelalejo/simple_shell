#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
int _strncmp( const char * s1, const char * s2, size_t n);


void exec_ve(int ac, char *argv[], char *envp[], int f);
int promp(int ac, char *av[], char *envp[], int f);
char *path(char *av,  char *envp[]);
char *str_cat(char *dest, char *src);
char *_strdup(char *str);
int _strlen(char *s);
int exit_h(char *argv[]);
int at_oi(char *arr);
void hsin(int handle_signal);

#endif
