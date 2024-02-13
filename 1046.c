#include <stdio.h>

int main() {

    int a,b,c; //a=start time,b=end time,c= duration time
    scanf("%d %d",&a,&b);

    c= b-a;

    if(c<0){
       c=24+c;
    }
    if(a==b){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else
        printf("O JOGO DUROU %d HORA(S)\n",c);

    return 0;
}
