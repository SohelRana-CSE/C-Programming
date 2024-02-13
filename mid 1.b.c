#include<stdio.h>
int main()
{
    int D=0,E=6;
    do{
        printf("%d\n",D);
        E--;

        if(E==1){
            break;
        }
    }while(E>0);

    return 0;
}

