#include <stdio.h>
#include <stdlib.h>
struct Sohel
{
    int a;
    struct Sohel *n;
};
typedef struct Sohel node;
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
    lastAdd(20);
    printList();
    printf("Insert 95 In Node No : ");
    scanf("%d",&a);
    addUn(a,95);
    printList();
    insertAtFirst();
    printList();
    delAtFirst();
    printList();
    delAtLast();
    printList();
    delUltimate();
    printList();
    search();
    printList();
    update(1,20);
    printList();
    update(count,100);
    printList();
    printf("Please Enter The Number To Update : ");
    scanf("%d",&b);
    printf("Please Enter The Node Position For Update : ");
    scanf("%d",&c);
    update(a,b);
    printList();
    maxMin();
    return 0;

}
void maxMin()
{
    node *head=p;
    int max,min;
    for(int i=0;; i++)
    {
        if(head==NULL)
        {
            break;
        }
        if(i==0)
        {
            max=head->a;
            min=head->a;
        }
        if((head->a)>max)
        {
            max=head->a;
        }
        if((head->a)<min)
        {
            min=head->a;
        }
        head=head->n;
    }
    printf("\n\tMAX = %d\n\tMIN= %d\n",max,min);
}
void search()
{
    int a,c=1;
    printf("Enter A Number To Search : ");
    scanf("%d",&a);
    node *nL=p;
    while(nL)
    {
        if(nL->a==a)
        {
            break;
        }
        nL=nL->n;
        c++;
    }
    if(nL==NULL)
    {
        printf("Value Not Found\n");
    }
    else
    {
        printf("%d Is In %d No Node\n",a,c);
    }
}
void delAtFirst()
{
    node *tmp=(node*)malloc(sizeof(node));
    tmp=p;
    p=p->n;
    free(tmp);
    counting();
}
void delAtLast()
{
    node *nL=p;
    while(nL->n->n!=NULL)
    {
        nL=nL->n;
    }
    free(nL->n->n);
    nL->n=NULL;
    counting();
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
void insertAtFirst()
{
    int a=55;
    node *tmp=(node*)malloc(sizeof(node));
    tmp->a=a;
    tmp->n=p;
    p=tmp;
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
