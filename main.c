#include "commonheader.h"

int pivotIndex(int *nums, int numsSize);

int main(int argc, char **argv)
{

    int array[] = {1,7,3,6,5,6};
    printf("%d\n", pivotIndex(array, 6));
}
// 4 5 2 3 1 4 6 9 -fsanitize=address 