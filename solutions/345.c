#include "../commonheader.h"

    #define isvowel(x) (x == 97 || x == 101 || x == 105 || x == 111 || x == 117)


    char *reverseVowels(char *s) {
        int slen = strlen(s);
        char *news = malloc(sizeof(char) * (slen + 1)) ;
        strcpy(news, s);
        char vowels[slen] = {};
        int j = 0;

        for (int i = 0; i < slen && j < slen; i++) {
            if (isvowel(tolower(s[i]))) {
                vowels[j++] = s[i];
            }
        }

        for (int i = 0; i < slen; i++) {
            if (isvowel(tolower(s[i]))) {
                news[i] = *(vowels + --j);
            }
        }
        return news;
    }