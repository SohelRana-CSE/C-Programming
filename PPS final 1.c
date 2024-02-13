#include<stdio.h>

int main(){
    int n,t=0;
    int a,b,c=0;
    scanf("%d",&n);

    while(n){
        scanf("%d",&a);
        if(t>=a){
            printf("%ds, %ds, %ds\n",t-a,t,t+10);
            t=t+10;
        }
        else{
            printf("%ds, %ds, %ds\n",c,a,a+10);
            t=a+10;
        }
    }

    return 0;
}
