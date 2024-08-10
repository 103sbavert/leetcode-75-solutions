#include "../commonheader.h"

char *strrev(char *string) {

}
    
char *gcdOfStrings(char *str1, char *str2) {
    int str1len = strlen(str1);
    int str2len = strlen(str2);
    char *shorterstr = str1len < str2len ? str1 : str2;
    char *longerstr = str2len > str1len ? str2 : str1;

    char temp1[str1len + str2len + 1], temp2[str1len + str2len + 1];

    sprintf(temp1, "%s%s", shorterstr, longerstr);
    sprintf(temp2, "%s%s", longerstr, shorterstr);

    if (strcmp(temp1, temp2)) return "";

    int gcdlen = strlen(shorterstr);

    while (strlen(longerstr) % gcdlen || strlen(shorterstr) % gcdlen) {
        gcdlen--;
    }

    char *gcd = calloc(gcdlen + 1, sizeof(char));

    for (int i = 0; i < gcdlen; i++) {
        gcd[i] = shorterstr[i];
    }

    return gcd;
}