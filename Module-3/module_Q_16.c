// Write a Program of Print a number and check the number is palindrome or 
// not using recursive Function
#include <stdio.h>
int isPalindrome(int num) 
{
    int reversed = 0, original = num;    
    while (num != 0) 
    {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return original == reversed;
}
int main() 
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    if (isPalindrome(n))
        printf("%d is a palindrome.\n", n);
    else
        printf("%d is not a palindrome.\n", n);
}
