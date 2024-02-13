#include <stdio.h>

int main()
{

    int N;

    int a,b,c,d,e,f,s;
    int g,h,i,j,k,l;


    scanf("%d",&N);

    a=N/100;
    printf("%d nota(s) de R$ 100,00\n",a);

    g=a*100;
    g=N-g;
    b=g/50;
    printf("%d nota(s) de R$ 50,00\n",b);

    h=(a*100)+(b*50);
    h=N-h;
    c=h/20;
    printf("%d nota(s) de R$ 20,00\n",c);

    i=(a*100)+(b*50)+(c*20);
    i=N-i;
    d=i/10;
    printf("%d nota(s) de R$ 10,00\n",d);

    j=(a*100)+(b*50)+(c*20)+(d*10);
    j=N-j;
    e=j/5;
    printf("%d nota(s) de R$ 5,00\n",e);

    k=(a*100)+(b*50)+(c*20)+(d*10)+(e*5);
    k=N-k;
    f=k/2;
    printf("%d nota(s) de R$ 2,00\n",f);

    l=(a*100)+(b*50)+(c*20)+(d*10)+(e*5)+(f*2);
    l=N-l;
    g=l/1;
    printf("%d nota(s) de R$ 1,00\n",g);

    return 0;
}
