#include <stdio.h>
#include <stdlib.h>
struct studentID
{
    int a;
    struct studentID *n;
};
typedef struct studentID node;
node *p;
int count;
int main(void)
{
    int a,b,c;
    node *n1;
    n1=(node*)malloc(sizeof(node));
    n1->a=0;
    n1->n=NULL;
    p=n1;
    printf("\tEnter ID number\n");
    insertFirstTime(10);
    printList();
    delUltimate();
    printList();
    printf("Insert 0 In Node No : ");
    scanf("%d",&a);
    addUn(a,0);
    printList();




    return 0;

}



void delUltimate()
{
    int a,c=1;
again:
    printf("Enter Node No To Delete : ");
    scanf("%d",&a);
    if(a==1||a>count)
    {
        printf("\t\tFirst Or Last Node Delete Is Not Possible!!\n");
        goto again;
    }
    node *nL=p;
    while(c!=(a-1))
    {
        nL=nL->n;
        c++;
    }
    node *tmp;
    tmp=nL->n;
    nL->n=nL->n->n;
    free(tmp);
    counting();
}
void update(int x,int y)
{
    int c=1;
    node *nL=p;
    while(nL)
    {
        if(c==x)
            break;
        nL=nL->n;
        c++;
    }
    if(!nL)
    {
        printf("Not Enough Node\n");
    }
    else
    {
        nL->a=y;
    }
    counting();
}
void addUn(int x,int y)
{
    int c=1;
    node *nL=p;
    while(nL)
    {
        if(c==x)
        {
            break;
        }
        nL=nL->n;
        c++;
    }
    if(!nL)
    {
        printf("Not Enough Node\n");
    }
    else
    {
        node *tmp=(node*)malloc(sizeof(node));
        tmp->a=nL->a;
        tmp->n=nL->n;
        nL->n=tmp;
        nL->a=y;
    }
    counting();
}

void insertFirstTime(int x)
{
    int n;
    for(int i=0; i<x; i++)
    {
        printf("Input #%d : ",i+1);
        scanf("%d",&n);
        if(i==0)
        {
            update(1,n);
        }
        else
        {
            lastAdd(n);
        }
    }
}
void lastAdd(int x)
{
    node *tmp=(node*)malloc(sizeof(node));
    node *nL=p;
    while(nL->n)
    {
        nL=nL->n;
    }
    tmp->n=NULL;
    tmp->a=x;
    nL->n=tmp;
    counting();
}
void printList()
{
    count=0;
    node *temp = p;
    while(temp)
    {
        count++;
        printf("%d ",temp->a);
        temp=temp->n;
    }
    printf("\n");
}
void counting()
{
    count=0;
    node *temp = p;
    while(temp)
    {
        count++;
        temp=temp->n;
    }
}
