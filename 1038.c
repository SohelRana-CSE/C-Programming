#include<stdio.h>
int main()
{
    int X,Y;
    float Z;
    scanf("%d %d",&X,&Y);

    if(X==1){
        Z=(float) 4.00 * Y;
    }
    else if(X==2){
         Z=(float) 4.50 * Y;
    }
    else if(X==3){
         Z=(float) 5.00 * Y;
    }
    else if(X==4){
        Z=(float) 2.00 * Y;
    }
    else if(X==5){
         Z=(float) 1.50 * Y;
    }
    printf("Total: R$ %.2f\n",Z);

    return 0;
}
