
#include<stdio.h>
int main()
{
    char N[9];
    double f,s;
    double t,u;
    gets(N);

    scanf("%lf %lf",&f,&s);

    t=s * 15/100;
    u=t+f;

    printf("TOTAL = R$ %0.2lf\n",u);

    return 0;

}
