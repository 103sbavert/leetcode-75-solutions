#include "../commonheader.h"

bool canPlaceFlowers(int *flowerbed, int flowerbedSize, int n) {
    int flowercount =  0;
    for (int i =  0; i < flowerbedSize && flowercount < n; i++) {
        if (flowerbed[i] ==  0) {
            bool leftIsZero = (i ==  0 || flowerbed[i -  1] ==  0);
            bool rightIsZero = (i == flowerbedSize -  1 || flowerbed[i +  1] ==  0);

            if (leftIsZero && rightIsZero) {
                flowerbed[i] =  1;
                flowercount++;
            }
        }
    }

    return flowercount >= n;
}

