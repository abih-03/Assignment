/* Write a program make a summation of given number(E.g. 1523 ans :-11) */
#include<stdio.h>
int main()
{
    int num, sum=0;
    printf("Enter any number for  summation: ");
    scanf("%d",&num);
    while (num !=0)
    {
        sum+=num%10;

        num/=10;
    }
    printf("sum for digits: %d \n",sum);
}
