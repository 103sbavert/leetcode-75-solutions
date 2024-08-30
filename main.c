#include "commonheader.h"

int longestOnes(int *nums, int numsSize, int k);

int main(int argc, char **argv)
{
    int array[] = {1, 1, 1, 1, 0, 0, 0};
    int size = sizeof(array) / sizeof(*array);
    int k = 2;
    printf("%d\n", longestOnes(array, size, k));
}

// 4 5 2 3 1 4 6 9