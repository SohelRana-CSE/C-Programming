#include<stdio.h>

int main(){
    int n,i,j,k,a=0,arr[111];

    scanf("%d",&n);
    i=0;
    while(n){
        if(n%10){
            k=n%10;
            if(k%2){
                arr[i]=k;
                i+=1;
            }
        }
        n=n/10;
    }
    k=1;
    for(j=0;j<i;j++){
        a=a+(arr[j]*k);
        k=k*10;
    }
    printf("%d.",a);


    if(a==1){
        printf(" Not Prime\n");
    }
    else{
        printf(" Prime\n");
    }

    return 0;
}
