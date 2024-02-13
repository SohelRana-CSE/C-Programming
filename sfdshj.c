#include <stdio.h>

int main() {

    float a,b,s,MaiorAB;
    scanf("%f %f %d",&a,&b,&s);

    MaiorAB=(a+b+(a*b*s)*(a-b))/2;
    printf("%d eh o maior",MaiorAB);

    return 0;
}

