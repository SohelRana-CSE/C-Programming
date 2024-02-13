#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
}*head;

void singlylist();
void printlist();
void update(int update_value);
void removevalue();

void main()
{
    int num,update_value;
    printf("enter node number: ");
    scanf("%d",&num);
    singlylist(num);
    printf("enter update value: ");
    scanf("%d",&update_value);
    update(update_value);
    printlist();
    removevalue();
    printlist();
}
void singlylist(int num)
{
    int i,user_value;
    struct node*temp,*a_node;
    temp = NULL;
    a_node = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    printf("enter value of node: ");
    scanf("%d",&user_value);
    head->data = user_value;
    head->next = NULL;

    temp = head;

    for( i=1;i<num;i++)
    {
       a_node = (struct node*)malloc(sizeof(struct node));
       scanf("%d",&user_value);
    a_node->data = user_value;
       a_node->next = NULL;

       temp->next = a_node;
       temp = a_node;
    }
}
void printlist()
{
    struct node * temp = head;
    while(temp != NULL)
    {
        printf("%d ",temp->data);

        temp = temp->next;
    }
}
void update(int update_value)
{
    int user_value,count=1;
    struct node * temp;
    temp = head;
    while(temp != NULL)
    {
        if(temp->data == update_value)
        {
            printf("enter updated value: ");
            scanf("%d",&user_value);

            temp->data = user_value;
        }
        count++;
        temp = temp->next;
    }
}
void removevalue()
{
    int demo =1,user_value;
    printf("\nwhich node want to remove: ");
    scanf("%d",&user_value);

    struct node * temp, * dnode;

    temp = head;
    while(temp != NULL)
    {
      if(demo == user_value-1)
      {
           dnode = temp->next;
           temp->next = dnode->next;
           free(dnode);
           return ;
      }
        temp = temp->next;
        demo++;
    }
}
