// 1_2.c
// Q. Write a program to find the position of the character 'C' in the sentence "idea without execution is worthless" using pointer and string.

#include <stdio.h>

void main()
{
    char str[100] = "Ideas without execution is worthless!";
    char *c;
    c = str;
    while (*c != '\0')
    {
        if (*c == 'c')
        {
            printf("Found the position of c in %d.", (int)(c - str));
            break;
        }
        c++;
    }
}
