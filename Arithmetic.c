//Write a program that takes two integer number & display sum with avg
#include<stdio.h>
int main()
{
    int num1,num2,sum;
    float avg;
    printf("Enter two ineteger numbers: ");
    scanf("%d%d",&num1,&num2);

    sum = num1 + num2 ;
    printf("The sum is = %d\n",sum);

    avg = (float)sum/2;//type casting
    printf("The average is = %.2f\n",avg);

    return 0;
}
