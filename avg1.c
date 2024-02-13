#include<stdio.h>
float main()
{
    float a,b,avg;

    printf("Inter number a: ");

    scanf("%f",&a);

    printf("Inter number b: ");

    scanf("%f",&b);

    avg=((a*3.5)+(b*7.5))/(3.5+7.5);

    printf("\nMEDIA = %f\n",avg);

    return 0;
}

