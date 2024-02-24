#include "../commonheader.h"

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int maxthreshold = candies[0];
    *returnSize = candiesSize;

    for (int i = 1; i < candiesSize; i++) {
        if (maxthreshold < candies[i]) {
            maxthreshold = candies[i];
        }
    }

    bool *truthvalues = calloc(candiesSize,  sizeof(bool));

    for (int i = 0; i < candiesSize; i++) {
        if (candies[i] + extraCandies >= maxthreshold) {
            truthvalues[i] = true;
        }
    }

    return truthvalues;
}