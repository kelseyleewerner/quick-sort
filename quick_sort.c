// Kelsey Werner
// CS-350
// 04/15/2021
// HW #2: Mystery Sort

#include <stdio.h>


void mystery_sort(int * arr, int lo, int hi);


int main()
{
  int i, count, x[1000];

  printf("How many elements are you going to enter?: ");
  scanf("%d", &count);

  printf("Enter %d elements: ", count);
  for (i = 0; i < count; ++i)
    scanf("%d", &x[i]);

  printf("Unsorted Data: ");
  for (i = 0; i < count; ++i)
    printf(" %d", x[i]);
  printf("\n");

  mystery_sort(x, 0, count - 1);

  printf("Sorted Data: ");
  for (i = 0; i < count; ++i)
    printf(" %d", x[i]);
  printf("\n");

  return 0;
}


void mystery_sort(int * arr, int lo, int hi)
{
  if (lo >= hi)
    return;

  int pivot = arr[lo];
  int lo_index = lo + 1;
  int hi_index = hi;
  int temp;

  while (lo_index < hi_index) {
    while (arr[lo_index] <= pivot && lo_index < hi_index)
      ++lo_index;
    while (arr[hi_index] >= pivot && lo_index < hi_index)
      --hi_index;
    if (lo_index == hi_index)
      break;
    temp = arr[lo_index];
    arr[lo_index++] = arr[hi_index];
    arr[hi_index--] = temp;
  }

  if (arr[hi_index] >= pivot)
    --hi_index;

  arr[lo] = arr[hi_index];
  arr[hi_index] = pivot;

  mystery_sort(arr, lo, hi_index - 1);
  mystery_sort(arr, hi_index + 1, hi);
}
























