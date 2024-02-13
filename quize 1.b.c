#include<stdio.h>
int main()
{
    int a=5,b=10,c=15;
    printf("1.a=%d\n",b-=a);

    c-=(b--)-(++c);
    a=((--a)+(c++));

    printf("2.a=%d b=%d c=%d\n",a,b,c);
    return 0;
}
