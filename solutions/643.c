#include <stdio.h>
#include <stdlib.h>

double findMaxAverage(int *nums, int numsSize, int k)
{
    int sum = 0;
    int temp = 0;
    while (temp < k)
    {
        sum += nums[temp++];
    }

    int max = sum;

    for (int i = 1, j = k; j < numsSize; i++, j++)
    {
        sum = sum + nums[j] - nums[i - 1];
        if (sum > max)
            max = sum;
    }

    return (double)max / (double)k;
}