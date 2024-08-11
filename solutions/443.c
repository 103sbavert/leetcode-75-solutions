#include "../commonheader.h"

void appendCompressed(char *string, char character, int count);

int compress(char *chars, int charsSize)
{
    char *newChars = calloc(charsSize + 1, sizeof(char));
    char lastChar = '\0';
    int count = 0;

    for (int i = 0; i < charsSize; i++)
    {
        if (lastChar == chars[i])
        {
            count++;
        }
        else
        {
            if (lastChar != '\0')
            {
                appendCompressed(newChars, lastChar, count);
            }
            count = 1;
            lastChar = chars[i];
        }
    }

    appendCompressed(newChars, lastChar, count);
    int len = strlen(newChars);
    printf("%d\n", len);
    memcpy(chars, newChars, sizeof(char) * len);
    free(newChars);
    return len;
}

void appendCompressed(char *string, char character, int count)
{
    char *start = string;

    while (*start != 0)
    {
        start++;
    }

    if (count > 1)
        sprintf(start, "%c%d", character, count);
    else
        sprintf(start, "%c", character);
}