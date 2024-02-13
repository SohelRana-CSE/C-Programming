#include<stdio.h>
int main()
{
    int a[5],i,j;
    printf("Enter the number of array:\n");
    for(i=0; i<=4; i++)
    {
        printf("Item %d:",i+1);
        scanf("%d",&a[i]);
    }
    for(j=0; j<=4; j++)
    {
        printf("Ittem %d is %d and its address is %d.\n",j+1,a[j],&a[j]);
    }
    return 0;
}
