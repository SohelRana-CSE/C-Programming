#include<stdio.h>
int main()
{
    int sum=0,n;

    scanf("%d",&n);
    printf("The odd numbers are:\n");
    int i=1;
    while(i<=n)
    {
        printf(" %d\n",i);
        sum=sum+i;
        i=i+2;

    }
    printf("SUM= %d",sum);
    return 0;

}
