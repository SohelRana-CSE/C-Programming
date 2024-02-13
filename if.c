#include<stdio.h>
int main()
{
    int a ;
    scanf("%d", &a);
    if (a >= 10)
    {
        a = a + 1;
    }
    else
    {
        a = 0;
    }
    printf("%d\n", a);
}
