//Write a C program to enter P, T, R and calculate Simple Interest

#include<stdio.h>
int main()
{
    float P,T,R,SI;

    printf("Enter Principle: ");
    scanf("%f",&P);
    printf("Enter time: ");
    scanf("%f",&T);
    printf("Enter rate: ");
    scanf("%f",&R);

    SI=(P*T*R)/100;

    printf("Simple Interest = %f\n",SI);

    return 0;
}
