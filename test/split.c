/*
 * E89 Pedagogical & Technical Lab
 * project:     split
 * created on:  2023-05-11 - 10:16 +0200
 * 1st author:  Sokaneil SIeng - sokaneil
 * description: split test
 */

#include <criterion/criterion.h>
#include "split.h"

Test(split, simple)
{
    char **sp;

    sp = split("hello;world;", ';');
    cr_assert(sp);
    cr_assert_str_eq(sp[0], "hello");
    cr_assert_str_eq(sp[1], "world");
    cr_assert_str_eq(sp[2], "");
    cr_assert_not(sp[3]);
    split_delete(sp);
}
