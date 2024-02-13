#include<stdio.h>
int main()
{
    char lower;
    printf("Enter any lowercase letter : ");
    scanf("%c",&lower);

    printf("The Uppercase letter is : %c",lower-32);

    return 0;
}
