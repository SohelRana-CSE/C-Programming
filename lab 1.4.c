//Write a C program to enter temperature in Celsius and convert it into Fahrenheit

#include<stdio.h>
int main()
{
    int f,c;

    printf("Enter temperature in Celcius = ");
    scanf("%d",&c);

    f=(c*9/5)+32;

    printf("Temperature in Farenheight = %d\n",f);

   return 0;
}
