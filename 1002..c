/*#include<stdio.h>
int main()
{
    double A,n,R;
    n=3.14159;

    scanf("%lf",&R);

    A = n*R*R;

    printf("A=%0.4lf",A);

    return 0;
}
*/

#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("enter variable number : \n");
    scanf("%d",&n);
     printf("enter value in variable number : \n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    int max = a[0];
    for(i=1;i<n;i++)
    {
       if(max<a[i])
       {
           max = a[i];

       }
    }
    printf("maximum number : %d",max);

    return 0;
}

