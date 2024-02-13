#include<stdio.h>
int main()
{
    int food,sum;
    int Burger=100, Pizza=120,Sandwich=100,Drinks=20;
    printf("Welcome to 'Ki khete chan Bolen (KKCB)'");

    printf("\n\nAvailable food:\n\t\t1.Burger--100tk\n\t\t2.Pizza--120tk\n\t\t3.Sandwich--100tk\n\t\t4.Drinks--20tk\n");

    repeat:
    printf("Select your food:");
    scanf("%d",&food);

    switch (food){
    case 1:
        Burger++;
        goto repeat;
        break;
    case 2:
        Pizza++;
        goto repeat;
        break;
    case 3:
        Sandwich++;
        goto repeat;
        break;
     case 4:
        Drinks++;
        goto repeat;
        break;

    case 5:
        sum=Burger+ Pizza+ Sandwich+  Drinks;
        printf("Result:\n",sum);
       // scanf("%d",sum);
        break;
    }

}
