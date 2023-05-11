/*
 * E89 Pedagogical & Technical Lab
 * project:     Split
 * created on:  2023-05-11 - 22:30 +0200
 * 1st author:  Sokaneil SIeng - sokaneil
 * description: split foreach
 */

#include "split.h"

void split_foreach(char **sp,
                   void (*func)(const char *))
{
    int i;

    i = 0;
    while (sp[i] != NULL) {
        func(sp[i]);
    }
    i += 1;
}
