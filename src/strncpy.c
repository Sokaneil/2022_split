/*
 * E89 Pedagogical & Technical Lab
 * project:     Split
 * created on:  2023-05-25 - 14:54 +0200
 * 1st author:  Sokaneil SIeng - sokaneil
 * description: strncpy
 */

#include <stddef.h>
#include "split.h"

char *stu_strncpy(char *dest, const char *src, unsigned int n)
{
    int m;

    m = 0;
    while ((dest == NULL) && (src == NULL)) {
        return (NULL);
    }
    while (src[m] != '\0') {
        if (m < (int) n) {
        dest[m] = src[m];
        } else {
            dest[m] = '\0';
            return dest;
        }
        m = m + 1;
    }
    dest[m] = '\0';
    return (dest);
}
