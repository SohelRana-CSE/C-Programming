#include<stdio.h>
int main()
{
    double A,pi,R;
    pi=3.14159;

    scanf("%lf",&R);
    double r=R*R*R;

    A=(4/3.0) * pi *r;

    printf("VOLUME = %0.3lf\n",A);

    return 0;
}


