#include<stdio.h>
int main()
{
    int A,B,C,sum;
    float avg;

    printf("Enter any three numbers = ");
    scanf("%d %d %d",&A,&B,&C);

    sum = A + B + C;
    avg = (float)sum/3;

    printf("Sum = %d\n",sum);

    printf("Average = %f\n",avg);

    return 0;
}
