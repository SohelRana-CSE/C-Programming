#include<stdio.h>
int main()
{
    int t;
    double n;
    int i =0;
    scanf("%d",&t);
    int ans[t];
    while(t--)
    {
        scanf("%lf",&n);
        ans[i] = ceil((n/2)-1);
        // this function convert double or float to int i++;
        t = 0;
        while(i--)
        {
            printf("2. %d\n",ans[t++]);
        i=0;
        }
        return 0;
    }
