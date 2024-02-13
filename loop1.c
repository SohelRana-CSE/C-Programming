#include<stdio.h>
int main()
{

    int num,sum=0;

    printf("The first 10 natural number is: \n");

    for(num=1;num<=10;num++)
    {
        sum=sum+num;
        printf("%d\n",num);
    }
    printf("\nThe Sum is: %d\n",sum);

    return 0;
}
