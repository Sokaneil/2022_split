/*
 * E89 Pedagogical & Technical Lab
 * project:     split
 * created on:  2023-05-11 - 22:18 +0200
 * 1st author:  Sokaneil SIeng - sokaneil
 * description: puts
 */

#include "split.h"


int stu_puts(const char *str)
{
    int i;

    i = stu_strlen(str);
    i = write(1, str, i);
    write(1, "\n", 1);
    if (i < 0) {
        return (-1);
    }
    return (i + 1);
}
