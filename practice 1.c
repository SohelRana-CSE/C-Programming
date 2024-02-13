#include<stdio.h>
#include<stdlib.h>
 struct node
{
    int dt;
    struct node *next;
    struct node *prev;
} ;
typedef node;
node *head;

void create()
{

    node f=(node)malloc(sizeof(node));
    f->dt=1;
    f->next=NULL;
    f->prev=NULL;

    head=f;


    node s=(node)malloc(sizeof(node));
    s->dt=2;
    s->next=NULL;
    s->prev=NULL;

    f->next=s;
    s->prev=f;


    node t=(node)malloc(sizeof(node));
    t->dt=3;
    t->next=NULL;
    t->prev=NULL;

    s->next=t;
    t->prev=s;


    node fo=(node)malloc(sizeof(node));
    fo->dt=4;
    fo->next=NULL;
    fo->prev=NULL;

    t->next=fo;
    fo->prev=t;


    node fi=(node)malloc(sizeof(node));
    fi->dt=5;
    fi->next=NULL;
    fi->prev=NULL;

    fo->next=fi;
    fi->prev=fo;


}
void display()
{
    node *temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->dt);
        temp=temp->next;
    }

}


int main()
{
    create();


   display();

}
