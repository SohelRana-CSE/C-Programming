#include <stdio.h>

int main()
{

    double x1,y1;
    double x2,y2;
    double a,b,c,d,Distance;
    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);

    a=x2-x1;
    b=y2-y1;

    c=a*a;
    d=b*b;
    Distance=sqrt(c+d);

    printf("%0.4lf",Distance);

    return 0;
}
