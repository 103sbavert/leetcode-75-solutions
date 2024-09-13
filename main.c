#include "commonheader.h"

int longestSubarray(int *nums, int numsSize);

int main(int argc, char **argv)
{
    int array[] = {0, 1, 1, 1, 0, 1, 1, 0, 1};
    int size = sizeof(array) / sizeof(*array);
    printf("%d\n", longestSubarray(array, size));
}

// 4 5 2 3 1 4 6 9