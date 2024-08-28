#include "commonheader.h"

int maxVowels(char *s, int k);

int main(int argc, char **argv) {
  char *s = "abciiidef";
  printf("%d", maxVowels(s, 3));
}

// 4 5 2 3 1 4 6 9