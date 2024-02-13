#include<stdio.h>
int main()
{
    int num1,num2,max;
    printf("Input num1: ",num1);
    scanf("%d",&num1);

    printf("Input num2: ",num2);
    scanf("%d",&num2);

    max=((num1>num2)?num1:num2);

    printf("Maximum = %d\n",max);

}
