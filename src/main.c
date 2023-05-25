#include "split.h"

int main(void)
{
    char **sp;

    sp = split("hello;world;hel", ';');
    split_print(sp);
    split_delete(sp);
}
