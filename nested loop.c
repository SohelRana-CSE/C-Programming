#include<stdio.h>
#include<conio.h>
int main()
{
    int r=1,c=1;
    while (r<=5)
    {
        c=1;
        while(c<=r)
        {
            printf("%d",c);
            c++;
        }
        printf("\n");
        r++;
    }
}
