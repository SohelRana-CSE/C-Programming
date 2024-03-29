#include<stdio.h>
#include<stdlib.h>

typedef struct studentID
{
    int data;
    struct studentID *next;
}node;

void insert(node*s, int data)
{
    while(s->next != NULL)
    {
        s=s->next;
    }
    s->next = (node*) malloc (sizeof(node));
    s->next->data =data;
    s->next->next=NULL;
}

void display(node*s)
{
    while(s-> next != NULL)
    {
        printf("%d ",s->next->data);
        s= s->next;
    }
}


void search(node*s, int data)
{
    int count = 0;
    while(s->next != NULL)
    {
        if(s->next-> data == data)
        {
           count ++;
        }

    }
    s = s-> next;

    printf("Total %d Result Found\n",count);
}

void deleteNode(node*s, int data)
{
    while(s-> next != NULL)
    {
        if(s->next-> data == data)
        {
            s->next  = s->next->next;
            return 0;
        }
        s= s-> next;
    }
}

void main()
{
    node* first = (node*) malloc (sizeof(node));
    first->next = NULL;

    insert(first, 2);
    insert(first, 0);
    insert(first, 1);
    insert(first, 1);
    insert(first, 5);
    insert(first, 1);
    insert(first, 3);
    insert(first, 9);
    insert(first, 0);
    insert(first, 6);

    display(first);

    search(first,4);


    deleteNode(first,6);
    display(first);

}
