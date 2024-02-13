#include<stdio.h>
int main()
{
    int a,b;
    float c,S;

    scanf("%d %d",&a,&b);
    scanf("%f",&c);

    printf("NUMBER = %d\n",a);

    S = b*(float)c;
    printf("SALARY = U$ %0.2f\n",S);

    return 0;
}
