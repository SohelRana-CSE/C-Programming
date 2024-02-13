#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter any two number: ");
    scanf("%d %d",&x,&y);
    double result = pow(x,y);
    printf("Result= %.1lf",result);

    return 0;
}
