#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data,n;
    struct node *next;
}Node;
void createLinkList()
{
    struct node *an,*temp;
    int n,i;
    an = (Node*)malloc(sizeof(Node));
    if(an==NULL)
    {
        printf("NULL");
    }
    else
    {
        printf("Enter Data for 1: ");
        scanf("%d",&n);
        an->n=n;
        an->next=NULL;
        temp=an;
    }
    for(i=2; i<=5; i++)
    {
      an = (Node*)malloc(sizeof(Node));
      if(an==NULL)
      {
          printf("NULL");
      }
      else
      {
          printf("Enter Data for %d: ",i);
          scanf("%d",&n);
          an->n=n;
          an->next=NULL;
          temp->next=an;
          temp=temp->next;

      }
    }
}
void printLinkList()
{
    struct node *temp;
    while(temp != NULL)
    {
        printf("Data= %d",temp->n);
        temp=temp->next;
    }

}
int main()
{
        createLinkList();
        printLinkList();

}

