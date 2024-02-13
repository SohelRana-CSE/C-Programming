//Write a program that calculates the area of a triangle
#include<stdio.h>
int main()
{
    float base,height,area;

    printf("base = ");
    scanf("%f",&base);

    printf("height = ");
    scanf("%f",&height);

    area = (float)1/2 * base *height;

    printf("Area = %.2f\n",area);


    return 0;
}
