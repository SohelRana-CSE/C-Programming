#include <stdio.h>

int main() {

    float a,b,c,perimeter,Area;
    scanf("%f %f %f",&a,&b,&c);

    if(a<(b+c) && b<(a+c) && c<(a+b))
    {
        perimeter=a+b+c;
        printf("Perimetro = %0.1f\n",perimeter);
    }
    else{
        Area=0.5*(a+b)*c;
        printf("Area = %0.1f\n",Area);
    }
    return 0;
}
