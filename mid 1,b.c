#include<stdio.h>
int main()
{
    int A=1,B=3,C=9,D=0;
    if(++A < B++)
    {
        printf("%d\n",B+C+D);
    }
    else
    {
        printf("%d\n",A);
    }
    return 0;
}
