#include<stdio.h>
int main()
{
    float area,radius;

    printf("Enter radius : ");
    scanf("%f",&radius);

    area = 3.1416 * radius * radius ;

    printf("The Area is = %0.2f\n",area);

    return 0;
}
