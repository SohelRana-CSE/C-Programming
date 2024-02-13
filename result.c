#include<stdio.h>
int main()
{
    int mark;

    printf("Enter your marks: ");
    scanf("%d",&mark);

    if(mark>=33)
    {
        printf("Pass");
    }
    else{
        printf("Fail");
    }
}
