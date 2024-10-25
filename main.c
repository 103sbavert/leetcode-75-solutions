#include "commonheader.h"

int **findDifference(int *nums1, int nums1Size, int *nums2, int nums2Size, int *returnSize, int **returnColumnSizes);

int main(int argc, char **argv)
{

    int returnSize;
    int *returnColumnSizes;
    int nums1[] = {1, 2, 3};
    int nums2[] = {2, 4, 6};

    int **result = findDifference(nums1, 3, nums2, 3, &returnSize, &returnColumnSizes);

    for (int i = 0; i < returnColumnSizes[0]; i++)
    {
        printf("%d ", result[0][i]);
    }
    printf("\n");

    for (int i = 0; i < returnColumnSizes[1]; i++)
    {
        printf("%d ", result[1][i]);
    }

    free(result[0]);
    free(result[1]);
    free(returnColumnSizes);
    free(result);
}
// 4 5 2 3 1 4 6 9 -fsanitize=address