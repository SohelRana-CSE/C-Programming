#include<Stdio.h>
int main()
{
    double A,B,C,pi;
    double T,c,t,Q,R;
    pi = 3.14159;
    scanf("%lf %lf %lf",&A,&B,&C);

    T=0.5 * A * C;
    printf("TRIANGULO: %0.3lf\n",T);

    c=pi*C*C;
    printf("CIRCULO: %0.3lf\n",c);

    t=0.5*(A+B)*C;
    printf("TRAPEZIO: %0.3lf\n",t);

    Q=B*B;
    printf("QUADRADO: %0.3lf\n",Q);

    R=A*B;
    printf("RETANGULO: %0.3lf\n",R);
    return 0;
}
