#include<stdio.h>
int main()
{
    int X=13906,difference,even=0,sum;
    difference=20000-X;
    sum=X + 06;
    for(int i=X+1;i<20000;i++)
    {
        if(i%2==0)
        {
            even++;
        }
    }
    printf("%d-%d-%d",difference,even,sum);

    return 0;
}
