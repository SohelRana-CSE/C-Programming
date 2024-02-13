//Write a C program to perform input/output of all basic data types.

#include<stdio.h>
int main()
{
    int a;
    float b;
    double c;
    char d;

    scanf("%d %f %lf %c",&a,&b,&c,&d);

    printf("int %d\n",a);
    printf("float %f\n",b);
    printf("double %lf\n",c);
    printf("char %c\n",d);


    return 0;
}
