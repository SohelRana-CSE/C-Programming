#include<stdio.h>
int main()
{
    int num1,num2,num3,max;

    printf("Input num1: ",num1);
    scanf("%d",&num1);

    printf("Input num2: ",num2);
    scanf("%d",&num2);

    printf("Input num3: ",num3);
    scanf("%d",&num3);

    max=(num1>num2 && num1>num3)?num1:(num2>num3 && num2>num1)?num2:num3;

    printf("Maximum = %d\n",max);

    return 0;
}
