// Write a program to sort the array of 5 elements. 
#include <stdio.h>
int main() 
{
  int arr[5] = {5, 2, 8, 7, 1};
  int i, j, temp;
  for (i = 0; i < 5; i++)
  {
    for (j = i + 1; j < 5; j++)
    {
      if (arr[i] > arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  printf("Sorted array: ");
  for (i = 0; i < 5; i++)
  {
    printf("%d ", arr[i]);
  }
}