#include<stdio.h>
int main()
{
    int x;
    printf("Enter any number: ");
    scanf("%d",&x);
    double result = sqrt(x);
    printf("Result= %.1lf",result);

    return 0;
}
