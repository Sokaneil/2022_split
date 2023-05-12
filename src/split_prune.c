/*
 * E89 Pedagogical & Technical Lab
 * project:     split
 * created on:  2023-05-11 - 22:37 +0200
 * 1st author:  Sokaneil SIeng - sokaneil
 * description: split_prune
 */

#include "split.h"

void split_prune(char **sp, int (*predicate)(const char *)) {
    int i;
    int j;

    i = 0;
    j = 0;
    while (sp[i] != NULL) {
        if (predicate(sp[i])) {
            free(sp[i]);
        } else {
            if (i != j) {
                stu_memmove(sp + j, sp + i, sizeof(char *) * (i - j));
            }
            j += 1;
        }
        i += 1;
    }
    sp[j] = NULL;
}
