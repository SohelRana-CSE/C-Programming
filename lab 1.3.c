/*Write a C program to enter radius of a circle and find its diameter,
circumference and area*/

#include<stdio.h>
int main()
{
    int r,A,D;
    double C;
    printf("Enter Radius: ");
    scanf("%d",&r);

    D=2*r;
    C=2*3.14159*r;
    A=3.14159*r*r;

    printf("Diameter = %d\n",D);
    printf("Circumference = %0.2lf\n",C);
    printf("Area = %d\n",A);

    return 0;
}
