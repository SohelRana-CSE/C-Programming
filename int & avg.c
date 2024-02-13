#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;
    float avg;

    printf("Enter any three number : ");
    scanf("%d %d %d",&num1,&num2,&num3);

    sum = num1 + num2 + num3;
    printf("The Sum Is = %d\n",sum);

    avg = (float)sum/3;
    printf("The Avg Is = %.2f\n",avg);

    return 0;
}
