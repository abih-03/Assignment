/*Write a program you have to print the Fibonacci series up to user given 
number*/
#include<stdio.h>
int main(){
    int num,n1=0,n2=1,count,temp=0;
    printf("Enter number:");
    scanf("%d",&num);
    printf("%d,%d,",n1,n2);
    count=2;
    while(count<=num){
        temp=n1+n2;
        n1=n2;
        n2=temp;
           printf("%d,",temp);
           count++;
    }
}