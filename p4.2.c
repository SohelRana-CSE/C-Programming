#include<Stdio.h>
int main()
{
    double z,a,b,c,d,e,f,g,h,i,j;
    double avg;
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    z=a+b+c+d+e+f+g+h+i+j;

    printf("The sum of 10 no is : %0.0lf\n",z);

    avg=z/10;

    printf("The Average is :%lf\n",avg);

    return 0;

}
