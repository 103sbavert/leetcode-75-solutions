#include <stdio.h>
#include <stdlib.h>

int longestOnes(int *nums, int numsSize, int k)
{
    int leftp = 0;
    int rightp = 0;

    while (rightp < numsSize)
    {
        if (nums[rightp] == 0)
            k--;

        if (k < 0)
        {
            if (nums[leftp] == 0)
                k++;

            leftp++;
        }

        rightp++;
    }

    return rightp - leftp;
}