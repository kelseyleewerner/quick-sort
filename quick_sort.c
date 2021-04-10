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




}
























