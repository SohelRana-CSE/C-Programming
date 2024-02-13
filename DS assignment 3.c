#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

typedef struct node node;

node *head = NULL;

void createlist();
void displaylist();

int main()
{
    createlist();
    printf("display list: ");
    displaylist();
    return 0;
}

void createlist()
{
    node * temp = NULL;
    node * newnode = NULL;
    int n, index=0,data;

    printf("how many node u want to create: ");
    scanf("%d",&n);

    do
    {
        newnode = (node*)malloc(sizeof(node));
        printf("enter node data: ");
        scanf("%d",newnode->data);
        newnode->left = newnode->right = NULL;

        if(head == NULL)
        {
            head = newnode;
            temp = newnode;

        }
        else
        {

            newnode->left = temp;
            newnode->right = NULL;
            temp->right = newnode;
            temp = newnode;
        }

        index++;
    }
    while(index < n);
}


void displaylist()
{
    node * temp ;
    temp = head;

    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->right;
    }
}
