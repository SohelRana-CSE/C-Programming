#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
}Node;
Node *head;

void create_doubly()
{
    int a,value;
    Node *newnode, *p;
    printf("Please enter the node no:");
    scanf("%d",&a);
    printf("Please enter the value:");
    scanf("%d",&value);

     newnode=(Node*)malloc(sizeof(Node));
     newnode->data=value;
     newnode->prev=NULL;
     newnode->next=NULL;
     head=newnode;
     p=newnode;

     for(int i=2;i<=a;i++)
     {
         printf("Please enter the value:");
         scanf("%d",&value);
         newnode=(Node*)malloc(sizeof(Node));
         newnode->data=value;
         newnode->next=NULL;
         newnode->prev=p;
         p->next=newnode;
         p=p->next;
     }
}

void delete_nth_node()
{
    Node *p, *temp;
    int value;
    p=head;
    printf("\nPlease enter a data from node which you want to delete:");
    scanf("%d",&value);
    while(p->next!=NULL)
    {
        if(p->next->data==value)
        {
            temp=p->next;
            p->next=temp->next;
            temp->next->prev=temp->prev;
            free(temp);
        }
        p=p->next;
    }
    printf("\nAfter deleting the node:");
}


void update_nth_node()
{
    Node *p;
    int n,value;
    p=head;
    printf("\nEnter which data want to update:");
    scanf("%d",&n);
    while(p!=NULL)
    {
        if(p->data==n)
        {
            printf("\nEnter the value to update:");
            scanf("%d",&value);
            p->data=value;


        }
        p=p->next;
    }
    printf("\nAfter updating the node:");
}

 void printlist()
    {
        Node *temp = head;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }

        printf("\n");

    }
    int main()
    {
        create_doubly();
        printf("\nList data:");
        printlist();

        update_nth_node();
        printlist();
    }
