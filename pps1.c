#include<stdio.h>
int main()
{
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);


    if(a>b&&a>c)
    {
        printf("%d is the big number\n",a);
        if(a/2==0)
            printf("%d is even number",a);
        else
            printf("%d is odd number",a);
    }

    else if(b>c&&b>c)
    {
        printf("%d is the big number\n",b);
        if(b/2==0)
            printf("%d is even number",b);
        else
            printf("%d is odd number",b);

    }
    else
    {
        printf("%d is the big number\n",c);
        if(c/2==0)
            printf("%d is even number",c);
        else
            printf("%d is odd number",c);
    }
    return 0;
}
