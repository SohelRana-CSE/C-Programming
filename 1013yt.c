#include <stdio.h>

int main() {

    int a,b,c,d,r;
    scanf("%d %d %d",&a,&b,&c);

    d=(a+b+abs(a-b))/2;
    r=(d+c+abs(d-c))/2;

    printf("%d eh o maior\n",r);

    return 0;
}
