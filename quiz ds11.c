#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node node;

node * head;


void createlist();
void displaylist();
void update_nth_node_value(int n_value);
void remove_nth_position();

int main()
{
    int n,n_value;
    printf("Please enter how manynode you want to create:- ");
    scanf("%d",&n);
    createlist(n);


    printf("which value you want to update: ");
    scanf("%d",&n_value);
    update_nth_node_value(n_value);


    displaylist();

    remove_nth_position();


    displaylist();
    return 0;
}



void createlist(int n)
{
    int i,value;
    node*temp; node*newnode;
    temp = NULL;
    newnode = NULL;

    head = (node*)malloc(sizeof(node));
    printf("enter value of node: ");
    scanf("%d",&value);
    head->data = value;
    head->next = NULL;

    temp = head;

    for( i=1;i<n;i++)
    {
       newnode = (node*)malloc(sizeof(node));
       scanf("%d",&value);
       newnode->data = value;
       newnode->next = NULL;

       temp->next = newnode;
       temp = newnode;

    }
}



void displaylist()
{
    node * temp = head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);

        temp = temp->next;
    }
}


void update_nth_node_value(int n_value)
{
    int u_value,i=1;
    node * temp;

    temp = head;

    while(temp != NULL)
    {
        if(temp->data == n_value)
        {
            printf("enter updated value: ");
            scanf("%d",&u_value);

            temp->data = u_value;
        }

        i++;
        temp = temp->next;
    }
}


void remove_nth_position()
{
    int i =1,num;
    printf("\n which node want to remove: ");
    scanf("%d",&num);

    node * temp; node * dnode;

    temp = head;
    while(temp != NULL)
    {
      if(i == num-1)
      {
           dnode = temp->next;
           temp->next = dnode->next;
           free(dnode);
           return ;
      }

       temp = temp->next;
        i++;
    }

}
