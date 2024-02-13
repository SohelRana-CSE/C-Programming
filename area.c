#include<stdio.h>
int main()
{
    float base,height,area;

    printf("base = ");
    scanf("%f",&base);

    printf("height= ");
    scanf("%f",&height);

    area = 0.5* base * height;

    printf("The Area Is = %0.2f\n",area);

    return 0;
}
