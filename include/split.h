/*
 * E89 Pedagogical & Technical Lab
 * project:     Split
 * created on:  2023-04-21 - 15:21 +0200
 * 1st author:  Sokaneil SIeng - sokaneil
 * description: library
 */

#ifndef SPLIT_H_
#define SPLIT_H_

#include <criterion/criterion.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char **split(const char *str, char token);
void split_delete(char **sp);
void split_print(char **sp);
unsigned int split_size(const char **sp);
void split_foreach(char **sp,
                   void (*func)(const char *));
void split_prune(char **sp,
                 int (*predicate)(const char *));
unsigned int stu_strlen(const char *str);
char *stu_strncpy(char *dest, const char *src, unsigned int n);
char *stu_strcpy(char *dest, const char *src);
char *stu_strdup(const char *src);
int stu_puts(const char *str);
void *stu_memmove(void *dest,
                  const void *src,
                  unsigned int n);

#endif
