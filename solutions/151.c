#include "../commonheader.h"

char *reverseWords(char *s) {
    char *news = calloc(strlen(s) + 1, sizeof(char));
    strcpy(news, s);
    char *resultstr = calloc(strlen(s) + 1, sizeof(char));
    char *words[strlen(s) / 2];

    char *temp;
    temp = strtok(news, " ");
    words[0] = temp;

    int i = 1;

    while (i < strlen(s) / 2) {
        if ((temp = strtok(nullptr, " ")) == nullptr)
            break;
        words[i] = temp;
        i++;
    }

    int k = 0;
    for (i = i - 1; i >= 0; i--) {
        for (int j = 0; j < strlen(words[i]); j++) {
            resultstr[k] = words[i][j];
            k++;
        }
        if (i > 0) resultstr[k++] = ' ';
    }

    free(news);
    return resultstr;
}