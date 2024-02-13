#include<stdio.h>
void main()
{
    int a=10;
    while(a<53)
    {
        if(a==22)
        {
            a++;
        continue;
        }
        printf("Value of a is %d\n",a);
        a++;
    }
}

