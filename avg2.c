#include<stdio.h>
int main()
{
    double A,B,C,avg;

    scanf("%lf%lf%lf",&A,&B,&C);
    avg=((A*2.0)+(B*3.0)+(C*5.0))/(2.0+3.0+5.0);
    printf("MEDIA = %0.1lf\n",avg);
    return 0;
}
