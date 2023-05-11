/*
 * E89 Pedagogical & Technical Lab
 * project:     Test Unitaires
 * created on:  2023-01-30 - 09:38 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: strcpy
 */

char *stu_strcpy(char *dest, const char *src)
{
    int m;

    m = 0;
    while (src[m] != '\0') {
        dest[m] = src[m];
        m = m + 1;
    }
    dest[m] = '\0';
    return dest;
}
