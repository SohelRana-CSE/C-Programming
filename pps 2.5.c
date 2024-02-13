#include<stdio.h>
int main()
{
    int a,b,c,d,e;

    printf("Input marks of five subjects: ",a);
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    float x=a+b+c+d+e;
    float y=(x/500.00)*100;
    printf("Percentage = %.2f\n",y);


    (x>=90)?printf("Grade A\n"):(x>=80&&x<90)?printf("Grade B\n"):(x>=70&&x<80)?printf("Grade C\n"):(x>=60&&x<70)?printf("Grade D\n"):(x>=40&&x<60)?printf("Grade E\n"):printf("Grade F\n");

    return 0;
}

