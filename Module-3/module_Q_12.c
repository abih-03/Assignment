//  Write a program to find out the Max number from given Matrix
#include <stdio.h>
int main() 
{
    int array[100], max, i;
    printf("Enter numbers: ");
    for(i = 0; i < 10; i++) 
    {
        scanf("%d", &array[i]);
    }
    max = array[100];

    for(i = 1; i < 10; i++) 
    {
        if(array[i] > max) 
        {
            max=array[i];
        }
    }
    printf("The maximum number is: %d\n", max);
}