#include<stdio.h>

int main()
{
    int i,j,k;
    i=4;
    j=5;
    k=3;
    i=--i + j++;
    k=k++;
    j=i-- + --k;

    printf("i=%dj=%dk=%d",i,j,k);

    return 0;

}
