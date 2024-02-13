#include<stdio.h>
#include<string.h>

struct studentInfo
{
    char name[100];
    char id[100];
    char mail[100];
};

int main(void)
{
    int i,a;
    printf("Enter N = ");
    scanf("%d",&a);
    fflush(stdin);
    struct studentInfo st[a];
    for(i=0; i<a; i++)
    {
        printf("Enter Name: ");
        gets(st[i].name);
        printf("Enter ID: ");
        gets(st[i].id);
        printf("Enter Email: ");
        gets(st[i].mail);
        printf("\n");
    }
        printf("\n\t\t Students Information\n\n");
        for(i=0; i<a; i++)
        {
            printf("%d . %s --- %s --- %s\n\n",i+1,st[i].name,st[i].id,st[i].mail);
        }
    }

