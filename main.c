#include "commonheader.h"
char *reverseWords(char *s);

int main(int argc, char **argv) {
    char *value = reverseWords("I DONT KNOW");
    printf("%s", value);

    free(value);

    return 0;
}