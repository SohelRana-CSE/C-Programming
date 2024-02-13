#include<stdio.h>
int main()
{
    print(8);
}
void print(int a){
if(a>=1){
    print(a-1);
    printf("%d ",a);
}
}

