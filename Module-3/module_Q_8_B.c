//1
//2 3
//4 5 6
//7 8 9 10

#include <stdio.h>

int main() {
  int row,col,number = 1;

   // printf("Enter the number of rows: ");
   // scanf("%d", &rows);
  for (row=1; row<=4; row++) 
  {
    for (col=1; col<=row; col++) 
    {
      printf("%d ", number);
      number++;
    }
    printf("\n");
  }
}