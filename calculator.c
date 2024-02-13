#include<stdio.h>
int main()
{
    float a,b,sum,sub,add,div;
    printf("Sum::- \n");
    printf("Enter a number: ");
    scanf("%f",&a);
    printf("Enter another number: ");
    scanf("%f",&b);
    sum=a+b;
    printf("Sum= %f\n\n",sum);

    printf("Substraction::- \n");
    printf("Enter a number: ");
    scanf("%f",&a);
    printf("Enter another number: ");
    scanf("%f",&b);
    sub=a-b;
    printf("Substraction= %f\n\n",sub);


    printf("Multiplication::- \n");
    printf("Enter a number: ");
    scanf("%f",&a);
    printf("Enter another number: ");
    scanf("%f",&b);
    add=a*b;
    printf("Multiplication= %f\n\n",add);

    printf("Divide::- \n");
    printf("Enter a number: ");
    scanf("%f",&a);
    printf("Enter another number: ");
    scanf("%f",&b);
    div=a/b;
    printf("Division= %f\n\n",div);

    return 0;
}
