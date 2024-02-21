#include "commonheader.h"

char *mergeAlternately(char *word1, char *word2) {
    int lenof1 = strlen(word1);
    int lenof2 = strlen(word2);
    int resultlen = lenof1 + lenof2;
    char *result = calloc(resultlen + 1, sizeof(char));

    for (int i = 0, j = 0, k = 0; k < resultlen;) {
        if (i < lenof1) *(result + k++) = word1[i++];
        if (j < lenof2) *(result + k++) = word2[j++];
    }

    return result;
}