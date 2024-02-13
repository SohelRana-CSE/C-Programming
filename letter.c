#include<stdio.h>
int main()
{
    char ch;
    printf("Please enter any letter: ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("This is a capital letter");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("This is a small letter");
    }
    else
    {
        printf("This is not a letter");
    }
}
