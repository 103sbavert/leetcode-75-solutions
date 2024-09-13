#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int longestSubarray(int *nums, int numsSize)
{
    int rightp = 0, leftp = 0;
    int zero_count = 0;

    for (; rightp < numsSize; rightp++)
    {
        zero_count += nums[rightp] == 0;

        if (zero_count > 1)
        {
            zero_count -= nums[leftp] == 0;
            leftp++;
        }
    }

    return rightp - leftp - 1;
}

// 0, 1, 1, 1, 0, 1, 1, 0, 1