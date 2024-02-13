#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct zoo {
    char animalName[ 100 ];
    int animalHeight;
    char animalColor[ 100 ];
};

int main()
{
    struct zoo *lion;
    struct zoo *elephant;

    strcpy( lion->animalName, "John" );
    lion->animalHeight = 4;
    strcpy( lion->animalColor, "brown" );

    strcpy( elephant->animalName, "Nemo" );
    elephant->animalHeight = 10;
    strcpy( elephant->animalColor, "grey" );

    printf("For lion: \n Name= %s \n Height= %d \n Color= %s \n\n",lion->animalName,lion->animalHeight,lion->animalColor);
    return 0;
}
