#include <stdio.h>
int main()
{
    double n;
    int Int, a, b, c;

    scanf("%lf", &n);

    Int = n;

    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", Int/100);
    a = Int % 100;

    printf("%d nota(s) de R$ 50.00\n", a/50);
    a = a % 50;

    printf("%d nota(s) de R$ 20.00\n", a/20);
    a = a % 20;

    printf("%d nota(s) de R$ 10.00\n", a/10);
    a = a % 10;

    printf("%d nota(s) de R$ 5.00\n", a/5);
    a = a % 5;

    printf("%d nota(s) de R$ 2.00\n", a/2);
    a = a % 2;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", a/1);

    c = (n * 100) - (Int * 100);

    printf("%d moeda(s) de R$ 0.50\n", c/50);
    b = c % 50;

    printf("%d moeda(s) de R$ 0.25\n", b/25);
    b = b % 25;

    printf("%d moeda(s) de R$ 0.10\n", b/10);
    b = b % 10;

    printf("%d moeda(s) de R$ 0.05\n", b/5);
    b = b % 5;

    printf("%d moeda(s) de R$ 0.01\n", b/1);
    b = b % 1;

    return 0;
}
