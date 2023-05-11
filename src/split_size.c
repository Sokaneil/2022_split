/*
 * E89 Pedagogical & Technical Lab
 * project:     split
 * created on:  2023-05-11 - 22:24 +0200
 * 1st author:  Sokaneil SIeng - sokaneil
 * description: split size
 */

#include "split.h"

unsigned int split_size(const char **sp)
{
    unsigned int count;

    count = 0;
    while (sp[count] != NULL) {
        count += 1;
    }
    return (count);
}
