#include "commonheader.h"

char *compress(char *chars, int charsSize);

int main(int argc, char **argv)
{
    char string[] = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    compress(string, strlen(string));
    printf("%s\n", string);
    printf("done");
    return 0;
}

// 4 5 2 3 1 4 6 9