#include "../commonheader.h"

#define MIN(P, Q) (P < Q ? P : Q)

int compFunc(const void *obj1, const void *obj2)
{
  return *((int *)obj1) - *((int *)obj2);
}

int **findDifference(int *nums1, int nums1Size, int *nums2, int nums2Size,
                     int *returnSize, int **returnColumnSizes)
{

  qsort(nums1, nums1Size, sizeof(*nums1), &compFunc);
  qsort(nums2, nums2Size, sizeof(*nums2), &compFunc);

  int *set1 = (int *)calloc(nums1Size, sizeof(int));
  int set1_size = 0;

  int *set2 = (int *)calloc(nums2Size, sizeof(int));
  int set2_size = 0;

  for (int last = nums1[0] + 1, i = 0; i < nums1Size; i++)
  {
    if (last != nums1[i])
    {
      set1[set1_size] = nums1[i];
      set1_size++;
    }

    last = nums1[i];
  }

  for (int last = nums2[0] + 1, i = 0; i < nums2Size; i++)
  {
    if (last != nums2[i])
    {
      set2[set2_size] = nums2[i];
      set2_size++;
    }

    last = nums2[i];
  }

  int *result1 = calloc(set1_size, sizeof(int));
  int *result2 = calloc(set2_size, sizeof(int));

  int **result = calloc(2, sizeof(int *));
  result[0] = result1;
  result[1] = result2;

  int result1_size = 0;
  int i, j = 0;

  for (i = 0; i < set1_size; i++)
  {
    int should_add = 1;
    for (j = 0; j < set2_size; j++)
    {
      if (set1[i] == set2[j])
      {

        should_add = 0;
        break;
      }

      if (set1[i] < set2[j])
      {
        break;
      }
    }

    if (!should_add)
      continue;

    result1[result1_size] = set1[i];
    result1_size++;
  }

  int result2_size = 0;


  for (i = 0; i < set2_size; i++)
  {
    int should_add = 1;
    for (j = 0; j < set1_size; j++)
    {
      if (set2[i] == set1[j])
      {
        should_add = 0;
        break;
      }

      if (set2[i] < set1[j])
      {
        break;
      }
    }

    if (!should_add)
      continue;

    result2[result2_size] = set2[i];
    result2_size++;
  }

  free(set1);
  free(set2);

  *returnColumnSizes = malloc(2 * sizeof(int));

  (*returnColumnSizes)[0] = result1_size;
  (*returnColumnSizes)[1] = result2_size;
  *returnSize = 2;

  return result;
}