//Take two integer number & display Sum,Sub,Mul,Div,Reminder
#include<stdio.h>
int main()
{
    int num1,num2;
    float result;
    printf("Enter two number : ");
    scanf("%d %d",&num1,&num2);

    result = num1 + num2;
    printf("Sum = %d\n",result);

    result = num1 - num2;
    printf("Sub = %d\n",result);

    result = num1 * num2;
    printf("Mul = %d\n",result);

    result = num1 / num2;
    printf("Div = %d\n",result);

    result = num1 % num2;
    printf("Reminder = %d\n",result);

    return 0;
}
