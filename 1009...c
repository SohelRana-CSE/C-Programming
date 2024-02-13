#include<stdio.h>
int main()
{
    char n;
    double a,b,c,d;

    scanf("%c %lf %lf",&n,&a,&b);

    c=b * 15/100;
    d=c+a;

    printf("TOTAL = %0.2lf",d);

    return 0;




}
