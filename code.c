#include<stdio.h>
int main()
{
    int t;
    double n;
    int i =0;


    scanf("%d",&t);
    int ans[t];

    while(t--){

        scanf("%lf",&n);
        ans[i] = ceil((n/2)-1);
        i++;

    }
    t = 0;
    while(i--){
        printf("2. %d\n",ans[t++]);
}
return 0;
}
