#include "commonheader.h"

int maxOperations(int *nums, int numsSize, int k);

int main(int argc, char **argv)
{

    int nums[] = {1,2,3,4}; 
    int n = 4;
    int k = 5;

    int value = maxOperations(nums, n, k);
    printf("%d\n", value);
}

// 4 5 2 3 1 4 6 9