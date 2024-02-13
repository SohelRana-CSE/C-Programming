#include<stdio.h>
int main()
{
    int i,sum=0;
    printf("The first 10 natural number is :\n");
    for(i=1; i<=10; ++i)
    {
        printf("%d\n",i);
        sum = sum+i;
    }

    printf("The Sum is : ",sum);


    return 0;
}
