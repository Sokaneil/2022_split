/*
 * E89 Pedagogical & Technical Lab
 * project:     Split
 * created on:  2023-05-12 - 15:07 +0200
 * 1st author:  Sokaneil SIeng - sokaneil
 * description: memmove
 */

void *stu_memmove(void *dest,
                  const void *src,
                  unsigned int n)
{
    unsigned int i;
    char *str_dest;
    char *str_src;

    i = 0;
    str_dest = (char *) dest;
    str_src = (char *) src;
    if (str_dest < str_src) {
        while (n > i) {
            str_dest[i] = str_src[i];
            i += 1;
        }
    } else {
        while (n > 0) {
            str_dest[n - 1] = str_src[n - 1];
            n -= 1;
        }
    }
    return (dest);
}
