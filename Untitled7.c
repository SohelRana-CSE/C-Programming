#include <stdio.h>

int main()
{

    int a,b,s;
    int MaiorAB;
    scanf("%d %d %d",&a,&b,&s);
    MaiorAB=(a+b+(a*b*s)*(a-b))/2;
    printf("%d eh o maior",MaiorAB);

    return 0;
}
