#include<stdio.h>
int main()
{
    int x=3,y=12,z=15;
    printf("1.x=%d\n",x++);

    y+=(x+1);
    y--;

    z=(++z)-(x++)+(--y);
    printf("2.x=%d y=%d z=%d\n",x,y,z);
    return 0;
}
