#include <stdlib.h>
#include <stdio.h>

#define MIN(A, B) A < B ? A : B

int maxArea(int *height, int heightSize)
{
    int max = 0;
    for (int i = 0, j = heightSize - 1; j >= i;)
    {

        int currHeight = MIN(height[i], height[j]);
        int currWidth = j - i;
        int currArea = currHeight * currWidth;
        if (currArea > max)
            max = currArea;

        if (height[j] > height[i])
            i++;
        else
            j--;
    }

    return max;
}