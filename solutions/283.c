#include "../commonheader.h"

void moveZeroes(int *nums, int numsSize)
{
    int *newNums = calloc(numsSize, sizeof(int));
    int *cpyNums = newNums;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i])
        {
            *cpyNums = nums[i];
            cpyNums++;
        }
    }

    for (int i = 0; i < numsSize; i++)
    {
        nums[i] = newNums[i];
    }
}