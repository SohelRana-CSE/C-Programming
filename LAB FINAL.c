/*#include<stdio.h>
int main()
{
    int food,sum;
    int Burger=0, Pizza=0,Sandwich=0,Drinks=0;
    printf("Welcome to 'Ki khete chan Bolen (KKCB)'");

    printf("\n\nAvailable food:\n\t\t1.Burger--100tk\n\t\t2.Pizza--120tk\n\t\t3.Sandwich--100tk\n\t\t4.Drinks--20tk\n");

    printf("Select your food:");
    scanf("%d",&food);
}

#include<stdio.h>
void num();
int main()

{
    num();
}
void num()
{
    int a, b;
    printf("Enter first number = ");
    scanf("%d",&a);
    printf("Enter second number = ");
    scanf("%d",&b);

    if(a > b) {
        printf("The greater number is: %d", a);
    }
    else {
        printf("The greater number is: %d", b);
    }
}

#include<stdio.h>
void num(int a, int b);
int main()
{
    int c, d;
    printf("Enter first number = ");
    scanf("%d",&c);
    printf("Enter second number = ");
    scanf("%d",&d);
    num(c,d);

}
void num(int x, int y)
{
    if(x > y) {
        printf("The greater number is: %d", x);
    }
    else {
        printf("The greater number is: %d", y);
    }
}
*/
/*
#include<stdio.h>
int num(int a, int b);
int main()
{
    int c, d, result;
    printf("Enter first number = ");
    scanf("%d",&c);
    printf("Enter second number = ");
    scanf("%d",&d);
    result = num(c, d);
    printf("The greater number is: %d", result);

}
int num(int x, int y)
{
    if(x > y) {
        return x;
    }
    else {
        return y;
    }
}
*/

#include<stdio.h>
void num(int a, int b);
int main()
{
    int c, d;
    printf("Enter first number = ");
    scanf("%d",&c);
    printf("Enter second number = ");
    scanf("%d",&d);
    num(c, d);
}
void num(int x, int y)
{
    if(x > y) {
        printf("The greater number is: %d", x);
    }
    else {
        printf("The greater number is: %d", y);
    }
}
