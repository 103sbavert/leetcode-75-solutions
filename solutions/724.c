#include <stdio.h>
#include <stdlib.h>

int pivotIndex(int *nums, int numsSize)
{

    int total_sum = 0;

    for (int i = 0; i < numsSize; i++)
    {
        total_sum += nums[i];
    }
    
    int left_sum = 0;
    int right_sum = 0;

    for (int i = 0; i < numsSize; i++)
    {
        right_sum = total_sum - nums[i] - left_sum;

        if (left_sum == right_sum)
            return i;

        left_sum += nums[i];
    }

    return -1;
}

// 1, 7, 3, 6, 5, 6