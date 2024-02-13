#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;
 node *head= NULL;
int main()
{
    node *node1=NULL;
    node1=(node*)malloc(sizeof(node));
    head=node1;
    int a,b;
    scanf("%d",&b);
    scanf("%d",&a);
    node1->data=a;
    node1->next=NULL;
    loop(b);
    add_data(20);
    int y;
    scanf("%d",&y);
    insert(y);
    first_insert();
    print();

    first_deletaion();
    print();
    last_deletion();
    print();
    scanf("%d",&y);
    nth_deletion(y);
    print();
    scanf("%d",&y);
    search(y);
    first_update(20);
    last_update(100);
    print();
    printf("\n");
    scanf("%d",&b);
    scanf("%d",&a);
    nth_update(b,a);
    print();
    printf("MINIMUM %d\n",min());
    printf("MAXIMUN %d\n",max());
   return 0;
}
int min()
{
    node *list=head;
    int mini=head->data;
    for(int i=1;;i++)
    {
        if(list==NULL)
            break;
        if(list->data<mini)
        { mini=list->data;

        }
    list=list->next;
    }
    return mini;
}
int max()
{
    node *list=head;
    int maxi;
    maxi=list->data;
    for(int i=1;;i++)
    {
        if(list==NULL)
            break;
        if(list->data>maxi)
        {
            maxi=list->data;
        }
    list=list->next;}
    return maxi;
}
void nth_update(int x,int a)
{
    node *list=head;
    for(int i=1;;i++){
        if(list==NULL)
            break;
        if(i==x)
        {
            list->data=a;
        } list=list->next;
    }
}
void last_update(int x)
{   node *list=head;
    while(list->next!=NULL)
    {
       list=list->next;
    }
    list->data=x;
}
void first_update(int x)
{
    head->data=x;
}
void search(int x)
{
    node *list=head;
    for(int i=1;;i++)
    {
         if(list==NULL)
    {
        break;
    }
        if(list->data==x)
        {
            printf("%d\n",x);
            break;
        }
        list=list->next;

    }
    if(list==NULL){
        printf("Value Not Found\n");
    }
}

void nth_deletion(int x)
{   node *list=head;
    node *temp;
    int i=1;
    while(i!=x-1)
    {
        i++;
        list=list->next;
    }
    temp=list->next;
    list->next=list->next->next;
    free(temp);
}
void first_deletaion()
{
     node *temp;
     temp=head;
     head=head->next;
     free(temp);
}
void first_insert()
{
    node temp=(node)malloc(sizeof(node));
    temp->data=55;
    temp->next=head;
    head=temp;
}
void last_deletion()
{    node *temp;

    node *list=head;
    while(list->next->next){
        list=list->next;
    }
    temp=list->next;
    list->next=NULL;
    free(temp);
   // 1.n,2.n,3.n
}
void insert(int x)
{   node *list=head;
    for(int i=1;;i++)
    {
        if(list==NULL)
            break;
        if(i==x-1)
            break;
        list=list->next;
    }
    node temp=(node)malloc(sizeof(node));
    temp->data=95;
    temp->next=list->next;
    list->next=temp;

}
void add_data(int x)
{
    node *list=head;
    for(; ;){
        if(list->next==NULL)
            break;
        list=list->next;
    }
    node temp=(node)malloc(sizeof(node));
    temp->data=x;
    temp->next=NULL;
    list->next=temp;
}

void loop(int x)
{
    int p;
    for(int i=1;i<x;i++)
    {
        scanf("%d",&p);
        add_data(p);
    }
}
void print(){
    node *list=head;
while(list!=NULL){
    printf("%d ",list->data);
    list=list->next;
}
printf("\n");
}
