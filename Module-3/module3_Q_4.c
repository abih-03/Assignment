/* Write a program of to find out the Area of Triangle, Rectangle and Circle 
using Switch Case .(Must Be Menu Driven)*/
#include <stdio.h>
#include <math.h>

int main() 
{
    int choice;
    float base, height, length, width, radius, area;

    printf("Menu:\n");
    printf("1. Calculate the area of a Triangle\n");
    printf("2. Calculate the area of a Rectangle\n");
    printf("3. Calculate the area of a Circle\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the base length of the triangle: ");
            scanf("%f", &base);
            printf("Enter the height of the triangle: ");
            scanf("%f", &height);
            area = 0.5 * base * height;
            printf("Area of the triangle: %.2f square units\n", area);
            break;
        case 2:
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%f", &width);
            area = length * width;
            printf("Area of the rectangle: %.2f square units\n", area);
            break;
        case 3:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = M_PI * pow(radius, 2);
            printf("Area of the circle: %.2f square units\n", area);
            break;
        default:
            printf("Invalid choice! Please select 1, 2, or 3.\n");
    }

}
