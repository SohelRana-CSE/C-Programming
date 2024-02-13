#include <stdio.h>
#include<math.h>
int main()
{
    int num,temp,factor=1,strongodd;

    printf("Enter a number: ");
    scanf("%d",&num);

    temp=num;
    while(temp)
    {
        temp=temp/10;
        factor = factor*10;
    }

    printf("Each digits of given number are: ");
    int count=0;
    while(factor>1)
    {
        factor = factor/10;

        if((num/factor)%2!=0)
        {
            printf("%d ",num/factor);
            count ++;

        }
        strongodd = strongodd + (num/factor)pow(count);
        num = num % factor;

    }
    int n, i, c = 0;
    printf("Enter any number n:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (strongodd % i == 0)
        {
            c++;
        }
    }

    if (c == 2)
    {
        printf("strongodd is a Prime number");
    }
    else
    {
        printf("strongodd is not a Prime number");
    }
    return 0;
}
