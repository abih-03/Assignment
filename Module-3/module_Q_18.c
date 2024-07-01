// Write program to make an addition of two number using pointer
#include<stdio.h>
int main()
{
    int first,second,*p,*q,sum;
    printf("Enter two integers to add:\n");
    scanf("%d%d",&first,&second);

    p=&first;
    q=&second;

    sum= *p + *q;
    printf("sum of entered numbers = %d\n",sum);
}