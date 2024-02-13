#include<stdio.h>
int main()
{
    int character;

    printf("Enter a character: ");
    scanf("%c",&character);

    switch(character)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Vowel\n");
        break;
    default:
        printf("Consonant\n");
    }
}
