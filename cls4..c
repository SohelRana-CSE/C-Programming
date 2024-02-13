#include<stdio.h>

int main()
{
    int i,j,k;
    i=4;
    j=5;
    k=3;
    i=j== + ++k;
    j=i;
    k=i++ + j--;

    printf("i=%dj=%dk=%d",i,j,k);

    return 0;

}
