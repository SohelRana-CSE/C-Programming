#include <stdio.h>

int main()
{

    double a,b,c,d;
    double avg,e;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    avg =( a*2 + b*3 + c*4 + d*1) /10;
    printf("Media: %0.1lf\n",avg);

    if(avg >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(avg < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if(avg>=5.0 && avg<=6.9)
    {
        {
            printf("Aluno em exame.\n");
        }
        scanf("%lf",&e);
        printf("Nota do exame: %0.1lf\n",e);

        avg = (avg +e) /2;

        if(avg>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
            else if(avg<=4.9)
            {
                printf("Aluno reprovado.\n");
            }
            printf("Media final: %0.1lf\n",avg);
        }
    return 0;
}
