#include<stdio.h>
int main()
{
    int T,n1,n2,n3;
    scanf("%d",&T);

    scanf("%d %d %d",&n1,&n2,&n3);

    if(n1<n2 && n1<n3)
    {
        printf("%d %d %d",n1,n2,n3);
    }
   else{
        printf("%d %d %d",n2,n3,n1);
    }



return 0;
}
