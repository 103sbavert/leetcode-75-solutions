#include "commonheader.h"

double findMaxAverage(int *nums, int numsSize, int k);

int main(int argc, char **argv) {
  int nums[] = {0, 4, 0, 3, 2};
  int k = 1;
  double value = findMaxAverage(nums, 5, k);
  printf("%f", value);
}

// 4 5 2 3 1 4 6 9