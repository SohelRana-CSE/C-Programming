//create a singly link list & print this//with user input


#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

int main()
{
    int i,n,item;
    struct node *p, *q, *head;

    printf("Enter the number of nodes: ");
    scanf("%d",&n);

    printf("Enter the value of the head node: ");
    scanf("%d",&item);

    q = (struct node*)malloc(sizeof(struct node));
    q->data = item;
    q->next = NULL;

    head = q;
    p = head;

    for(i=1; i<n; i++)
    {
    printf("Enter the value of the next node: ");
    scanf("%d",&item);

    q = (struct node*)malloc(sizeof(struct node));
    q->data = item;
    q->next = NULL;

    p -> next = q;         //link the node
    p = p -> next;          //jump to the current node

    }

    printf("\n");
    p = head;
    while(p!=NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }

    return 0;
}





