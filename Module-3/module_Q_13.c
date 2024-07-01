// Write a program to copy string from one string to another string with user 
// define function. 
#include <stdio.h>
int main() 
{
    char s1[] = "demo";
    char s2[100];
    int i;

    printf("String s1: %s\n", s1);

    for (i = 0; s1[i] != '\0'; ++i) 
    {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    printf("String s2: %s\n", s2);
}
