int comparison_function(const void *first, const void *second)
{
    int first_val = *((int *)first);
    int second_val = *((int *)second);

    if (first_val > second_val)
    {
        return 1;
    }
    else if (first_val < second_val)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int maxOperations(int *nums, int numsSize, int k)
{
    int count = 0;
    qsort(nums, numsSize, sizeof(*nums), comparison_function);

    for (int i = 0, j = numsSize - 1; i < j;)
    {
        int sum = nums[i] + nums[j];
        if (sum == k) {
            i++;
            j--;
            count++;
        } else if (sum < k) {
            i++;
        } else {
            j--;
        }
    }

    return count;
}