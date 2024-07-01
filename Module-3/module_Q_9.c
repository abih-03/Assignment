// Write a program to find out the max number from given 10 elements of array 
#include <stdio.h>
int main() 
{
    int array[10], max, i;

    printf("Enter 10 numbers: ");
    for(i = 0; i < 10; i++) 
    {
        scanf("%d", &array[i]);
    }
    max = array[0];

    for(i = 1; i < 10; i++) 
    {
        if(array[i] > max) 
        {
            max = array[i];
        }
    }

    printf("The maximum number is: %d\n", max);
}
