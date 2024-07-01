// Write a program to concatenate the two string using pointer.
#include <stdio.h>
void concatenatestrings(char*str1, const char*str2)
{
    while(*str1 !='\0')
    {
        str1++;
    }
    while(*str2 !='\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}

int main()
{
    char str1[50] = "hello";
    const char str2[] = "  program for pretic!";
    concatenatestrings(str1,str2);
    printf("Concatenated string: %s\n",str1);
}