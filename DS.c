#include<stdio.h>
int main()
{
    printf("Hello World\n");

    function(5);
}

int function(value){
if(value < 1)
return 0;
function(value - 1);
printf("%d ",value);
}
