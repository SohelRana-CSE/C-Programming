#include<stdio.h>
#include<math.h>

int main() {

    double a, b, c, d , e, f;
    scanf("%lf %lf %lf",&a, &b, &c);

    if (((b*b)-4*a*c)<0 || a==0){
        printf("Impossivel calcular\n");
    }

    else{d=sqrt((b*b)-4*a*c);

    e=(-b+d)/(2*a);
    f=(-b-d)/(2*a);

        printf("R1 = %0.5lf\nR2 = %0.5lf\n",e,f);
    }
    return 0;
}
