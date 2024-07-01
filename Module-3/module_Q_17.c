// Write a program of structure for five employee that provides the following 
// information print and display empno, empname, address and age
#include<stdio.h>
struct Employee
{
    int empno;
    char empname[20];
    char address[100];
    int age;
};

int main()
{
    struct Employee Employees[5];
    for(int i=0; i<5; i++)
    {
        printf("Enter Employee Details %d:- \n",i+1);
        printf("Enter Employee Number:- ");
        scanf("%d",&Employees[i].empno);
        printf("Enter Employee Name:- ");
        scanf("%s",&Employees[i].empname);
        printf("Enter Employee Address:- ");
        scanf("%s",&Employees[i].address);
        printf("Enter Employee Age:- ");
        scanf("%d",&Employees[i].age);
    }
    printf("\n Employee Details:\n");
    for(int i=0; i<5; i++)
    {
        printf("Employee Number:- %d\n",Employees[i].empno);
        printf("Employee Name:- %s\n",Employees[i].empname);
        printf("Employee Address:- %s\n",Employees[i].address);
        printf("Employee Age:- %d\n",Employees[i].age);

        printf("\n");
    }
}
