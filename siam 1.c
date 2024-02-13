#include<stdio.h>
int main()
{
    int choice;
    float temp,convertedTemp;
    printf("temperature conversion menu\n");
    printf("1. fahrenheit to celsius\n");
    printf("2.celsius to fahrenheit\n");
    printf("enter your choice : ");
    scanf("%d",&choice);

    switch(choice)

    {
    case 1:
        {
              printf("enter the fahrenheit temperature : ");
              scanf("%f",&temp);
              convertedTemp = (temp-32)/1.8;
              printf("the temperature in celsius is : %f\n",convertedTemp);
        }
    case 2:
        {
            printf("enter the celsius temperature : ");
              scanf("%f",&temp);
              convertedTemp = (1.8*temp)+32;
              printf("the temperature in fahrenheit is : %f\n",convertedTemp);
        }
    default:
        printf ("not a correct option");

    }

}
