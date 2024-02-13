#include<stdio.h>

int main()
{
    int year;
    printf("Enter a year: \n");
    scanf("%d", &year);

    if(year/400 == 0)
    {
        printf("leap Year");
    }
    else if(year/4 == 0 && year/100 != 0)
        {
        printf("leap Year");
    }
    else{
        printf("Not leap Year");
    }

    return 0;
}
