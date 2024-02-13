#include<stdio.h>
int main()
{
    int N, i , arr[i];
    int x[100];
    printf("Enter the number of Days:");
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        scanf("%d",&x[i]);
    }

    if( arr[i] <= 100)
    {
        printf("\n\nRoadside Food\n\n");
    }
    else if ( arr[i] >= 250 && arr[i] < 350)
    {
        printf("\n\nFast Food\n\n");
    }
    else if (arr[i] >= 350)
    {
        printf("\n\nKacchi\n\n");
    }

    else
    {
        printf("\n\nBFC\n\n");
    }


    return 0;
}
