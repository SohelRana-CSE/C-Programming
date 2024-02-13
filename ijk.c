#include<stdio.h>
int main()
{
    int i,j,k;
    i=1;
    j=4;
    i-- ;
    i++;
    j=++i + ++k;
    k=i++;

printf("i=%d j=%d k=%d\n",i,j,k);
return 0;
}
