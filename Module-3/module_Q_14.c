//Write a program to find out the factorial of given number using function. 
#include <stdio.h>
unsigned long long factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() 
{
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number < 0)
        printf("Factorial of a negative number doesn't exist.");
    else
        printf("Factorial of %d = %llu", number, factorial(number));

    return 0;
}
