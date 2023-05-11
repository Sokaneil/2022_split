/*
 * E89 Pedagogical & Technical Lab
 * project:     split
 * created on:  2023-05-11 - 22:51 +0200
 * 1st author:  Sokaneil SIeng - sokaneil
 * description: test
 */

#include "split.h"

void inter_puts(const char *str)
{
    puts(str);
}

int foo(const char *str)
{
    return !*str;
}

int main(void)
{
    char **sp = split("hello,,,,world", ',');
    split_foreach(sp, inter_puts);
    split_delete(sp);

    /*
     * char **sp1 = split("hello,,,,world", ',');
     * split_prune(sp1, foo);
     * split_print(sp1);
     * split_delete(sp1);
     */
}
