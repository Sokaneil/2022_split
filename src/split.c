/*
 * E89 Pedagogical & Technical Lab
 * project:     Split
 * created on:  2023-04-12 - 14:28 +0200
 * 1st author:  Sokaneil Sieng - sokaneil
 * description: split
 */

#include "split.h"

static int count_tokens(const char *str, char token)
{
    int count;
    char *ptr;

    count = 0;
    ptr = stu_strdup(str);
    while (*ptr) {
        if (*ptr == token) {
            count += 1;
        }
        ptr += 1;
    }
    return (count + 1);
}

char **split(const char *str, char token)
{
    char **result;
    char *pos;
    char *tmp;
    int count;
    int i;

    count = count_tokens(str, token);
    result = malloc(sizeof(char *) * (count + 2));
    i = 0;
    tmp = stu_strdup(str);
    pos = tmp;
    while (*pos) {
        if (*pos == token) {
            *pos = '\0';
            result[i] = stu_strdup(tmp);
            i += 1;
            tmp = pos + 1;
        }
        pos += 1;
    }
    result[i] = stu_strdup(tmp);
    result[i + 1] = NULL;
    return (result);
}
