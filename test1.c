#include<stdio.h>
int main()
{
    int n=1,sum=0;
    printf("The first 10 natural number is :\n");
    while(n<=10){
        printf("%d ",n);
    n++;
    }
    sum = sum + n;
    n=n+2;
    printf("\nThe Sum is: ",sum);

    return 0;
}
