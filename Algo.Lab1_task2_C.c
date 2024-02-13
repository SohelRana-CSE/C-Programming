#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A[10]= {11,23,5,27,33,1,45,18};
    int S [10];
    int n=9;

    S[0]=A[0];
    for (int i=1; i<n-1; i++)
    {
        S[i]=A[0];
        for (int j=1; j<=i; j++)
        {
            S[i]=S[i] + A[j];
        }

    }
    for (int i=0; i<n-1; i++)
    {
        printf("");
        printf("%d,",S[i]);

    }

}

