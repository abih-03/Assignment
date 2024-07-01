/* Write a program user enter the 5 subjects mark. You have to make a total and 
find the percentage*/
#include <stdio.h>
 
int main()
{
    int eng, phy, chem, math, comp; 
    int total, average, percentage;
 
    printf("Enter marks of five subjects:- ");
    printf("\n Enter marks of english:");
    scanf("%d",&eng);

    printf("Enter marks of phy:");
    scanf("%d",&phy);

    printf("Enter marks of chem:");
    scanf("%d",&chem);

    printf("Enter marks of math:");
    scanf("%d",&math);

    printf("Enter marks of comp:");
    scanf("%d",&comp);
    
    printf("\n");
    total = eng + phy + chem + math + comp;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;
 
    printf("Total marks = %d\n", total);
    printf("Average marks = %d\n", average);
    printf("Percentage = %d", percentage);
 
}