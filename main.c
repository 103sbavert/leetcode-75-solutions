#include "commonheader.h"

int maxArea(int *height, int heightSize);

int main(int argc, char **argv)
{
    int array[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    printf("answer %d\n", maxArea(array, sizeof(array) / sizeof(int)));
    return 0;
}

// 4 5 2 3 1 4 6 9