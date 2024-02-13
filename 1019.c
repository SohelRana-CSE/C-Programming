#include<stdio.h>
int main()
{
    int h,m,s,N;
    scanf("%d",&N);

    h=N/3600;
    m=N%3600/60;
    s=N%60;

    printf("%d:%d:%d\n",h,m,s);

    return 0;
}
