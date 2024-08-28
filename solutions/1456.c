#include <stdio.h>
#include <stdlib.h>

int maxVowels(char *s, int k)
{
    int vcount = 0;
    for (int i = 0; i < k; i++)
    {
        char l = s[i];
        if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u')
        {
            vcount++;
        }
    }

    int maxv = vcount;

    for (int i = 1, j = k; s[j] != '\0'; i++, j++)
    {
        char l;

        l = s[j];
        vcount += l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u';
        l = s[i - 1];
        vcount -= l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u';

        if (vcount > maxv)
            maxv = vcount;
    }

    return maxv;
}