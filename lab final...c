#include<stdio.h>
int main()
{
    int food,sum=0,quantity,y,br=0,piz=0,sand=0,dr=0;
    int Burger=100, Pizza=120,Sandwich=100,Drinks=20,b=0,p=0,s=0,d=0;
    printf("Welcome to 'Ki khete chan Bolen (KKCB)'");

    printf("\n\nAvailable food:\n\t\t1.Burger--100tk--1 piece.\n\t\t2.Pizza--120tk--1piece\n\t\t3.Sandwich--100tk--1 piece\n\t\t4.Drinks--20tk--1 piece\n\n");

repeat:
    printf("\nSir, Please select your item:\n");
    scanf("%d",&food);

    if(food==1)
    {
        printf("Quantity:");
        scanf("%d",&quantity);
        b=Burger*quantity;
        br++;
    }
    else if(food==2)
    {
        printf("Quantity:");
        scanf("%d",&quantity);
        p=Pizza*quantity;
        piz++;
    }
    else if(food==3)
    {
        printf("Quantity:");
        scanf("%d",&quantity);
        s=Sandwich*quantity;
        sand++;
    }
    else if(food==4)
    {
        printf("Quantity:");
        scanf("%d",&quantity);
        d=Drinks*quantity;
        dr++;
    }
    else
    {
        printf("Please choose correct item. Thank you.\n\n");
    }
    printf("Do you need more food? if yes  enter 1 otherwise 0.\n\n");
    scanf("%d",&y);

    if(y==1)
    {
        goto repeat;
    }
    else
    {
        printf("\n\nYou purchased:\n\n");
        if(br!=0)
        {
            printf("Burger =%d taka\n",b);
        }
        if(piz!=0)
        {
            printf("Pizza =%d taka\n",p);
        }
        if(sand!=0)
        {
            printf("Sandwitch =%d taka\n",s);
        }
        if(dr!=0)
        {
            printf("Drinks =%d taka\n",d);
        }

        sum=b+p+s+d;
        printf("\n-------------------------------------------\n");
        printf("Total amount: %d taka\n",sum);
    }
}
