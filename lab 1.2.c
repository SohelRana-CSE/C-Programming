/*Write a C program to enter two numbers and find their sum*/

#include<stdio.h>
int main()
{
    int A,B,sum;

    printf("Input First Number: ");
    scanf("%d",&A);
    printf("Input Second Number: ");
    scanf("%d",&B);

    sum=A+B;

    printf("Sum = %d\n",sum);
    return 0;
}
