#include<stdio.h>
#include<math.h>

int main()
{
    int i,n;
    long int s=0;

    printf("Enter the last number of series: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        s= s + pow (2,i);
    }
    printf("%ld",s);
    return 0;
}
