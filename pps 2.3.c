
#include<stdio.h>
int main()
{
    int a;
    printf("Input number: ",a);
    scanf("%d",&a);

    (a==0)? printf("%d is zero",a):(a>0)? printf("%d is positive",a): printf("%d is negative",a);

    return 0;
}
