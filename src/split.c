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

    count = 0;
    while (*str) {
        if (*str == token) {
            count += 1;
        }
        str += 1;
    }
    return (count + 1);
}

static void split_string(char **result, const char *str, char token)
{
    char *copied_str;
    char *pos;
    char *tmp;
    int i;

    i = 0;
    copied_str = stu_strdup(str);
    tmp = copied_str;
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
    free(copied_str);
}

char **split(const char *str, char token)
{
    int count;
    char **result;

    count = count_tokens(str, token);
    result = malloc(sizeof(char *) * (count + 1));
    split_string(result, str, token);
    return (result);
}
