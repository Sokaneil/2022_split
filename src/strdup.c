/*
 * E89 Pedagogical & Technical Lab
 * project:     split
 * created on:  2023-05-11 - 17:20 +0200
 * 1st author:  Sokaneil SIeng - sokaneil
 * description: strdup
 */

#include <stdlib.h>
#include "split.h"

char *stu_strdup(const char *src)
{
    char *str;

    str = malloc(sizeof(char) * stu_strlen(src) + 1);
    if (!str) {
        return (NULL);
    }
    stu_strcpy(str, src);
    return (str);
}
