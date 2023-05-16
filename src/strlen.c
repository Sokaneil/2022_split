/*
 * E89 Pedagogical & Technical Lab
 * project:     tp_getline
 * created on:  2023-02-22 - 09:40 +0100
 * 1st author:  sokaneil.sieng - sokaneil.sieng
 * description: strlen
 */

unsigned int stu_strlen(const char *str)
{
    unsigned int i;

    i = 0;
    if (!str)
        return (i);
    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}
