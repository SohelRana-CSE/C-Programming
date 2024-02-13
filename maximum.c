#include<stdio.h>

int main()
{
    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
    if(a>c)
    printf("%d\n",a);

    else
        printf("%d\n",c);
    }

    else if(b>a)
        if(b>c)
    printf("b is max");
    else
        printf("%d\n",b);
    else
    printf("c is max");

    return 0;

}
