/*
 * E89 Pedagogical & Technical Lab
 * project:     Split
 * created on:  2023-04-21 - 15:17 +0200
 * 1st author:  Sokaneil SIeng - sokaneil
 * description: split delete
 */

#include "split.h"

void split_delete(char** sp)
{
    int i;

    i = 0;
    while (sp[i] != NULL) {
        free(sp[i]);
        i += 1;
    }
    free(sp);
}
