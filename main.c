#include "commonheader.h"

bool increasingTriplet(int *nums, int numsSize);

int main(int argc, char **argv)
{
    int array[] = {2, 1, 5, 0, 4, 30, -1, 1};
    printf("%d\n", increasingTriplet(array, 8));
    return 0;
}

// 4 5 2 3 1 4 6 9