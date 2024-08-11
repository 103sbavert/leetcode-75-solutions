#include "commonheader.h"

void moveZeroes(int *nums, int numsSize);

int main(int argc, char **argv)
{
    int ints[] = {0, 0, 1};
    moveZeroes(ints, 3);
    return 0;
}

// 4 5 2 3 1 4 6 9