/*
 * E89 Pedagogical & Technical Lab
 * project:     split
 * created on:  2023-05-11 - 22:17 +0200
 * 1st author:  Sokaneil SIeng - sokaneil
 * description: split print
 */


#include "split.h"

void split_print(char **sp)
{
    int i;

    i = 0;
    while (sp[i]) {
        stu_puts(sp[i]);
        i += 1;
    }
}
