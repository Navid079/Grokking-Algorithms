#include <stdio.h>
#include <stdlib.h>

int binary_search(int[], int, int);

int main()
{
  int list[51];
  for (int i = 0; i <= 50; i++)
  {
    list[i] = i * 2;
  }
  printf("%d\n", binary_search(list, 51, 32));
  printf("%d\n", binary_search(list, 51, 31));
}

int binary_search(int list[], int n, int item)
{
  int low = 0, high = n - 1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    int guess = list[mid];
    if (guess == item)
      return mid;
    else if (guess > item)
      high = mid - 1;
    else
      low = mid + 1;
  }
  return -1;
}