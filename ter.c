//Take two integer number & display Sum,Sub,Mul,Div,Reminder
#include<stdio.h>
int main()
{
    int num1,num2;
    float result;
    printf("Enter two number : ");
    scanf("%d %d",&num1,&num2);

    result = num1 + num2;
    printf("Sum = %.2f\n",result);

    result = num1 - num2;
    printf("Sub = %.2f\n",result);

    result = num1 * num2;
    printf("Mul = %.2f\n",result);

    result = num1 / num2;
    printf("Div = %.2f\n",result);

    return 0;
}
