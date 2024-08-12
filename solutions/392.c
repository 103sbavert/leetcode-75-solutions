#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool isSubsequence(char *s, char *t)
{
    for (int i = 0; i < strlen(t); i++)
    {
        if (!(*s))
            return true;

        if (*s == t[i])
        {
            s++;
        }
    }

    return !(*s);
}