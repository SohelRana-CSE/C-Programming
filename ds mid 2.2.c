/*void delete( int num )
{
    struct node* current = head;
    struct node* previous = NULL;

    if( head == NULL ) {
        printf( "%d is not found in Linked List\n", num );
        return;
    }

    while( current->num != num ) {
        if( current->next == NULL ) {
            printf( "%d is not found in Linked List\n", num );
            return ;
        }
        else {
            previous = current;
            current = current->next;
        }
    }

    if( current == head ) {
        head = head->next;
    }
    else {
        previous->next = current->next;
    }

    printf( "%d is deleted\n", num );

    return current;
}
*/


#include<stdio.h>
#include<stdlib.h>

struct node
{
    int num;
    struct node *next;
}*node;




void createNode(int n)
{
    struct node *Node, *tmp;
    int num, i;

    node = (struct node *)malloc(sizeof(struct node));
    if(node == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {

        printf(" Input data for node 1 : ");
        scanf("%d", &num);

        node-> num = num;
        node-> next = NULL;
        tmp = node;


        for(i=2; i<=n; i++)
        {
            Node = (struct node *)malloc(sizeof(struct node));


            if(Node == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);

                Node->num = num;
                Node->next = NULL;

                tmp->next= Node;
                tmp = tmp->next;
            }
        }
    }
}

void MiddleNodeDeletion(int pos)
{
    int i;
    struct node *toDelMid, *preNode;

    if(node == NULL)
    {
        printf(" There are no nodes in the List.");
    }
    else
    {
        toDelMid = node;
        preNode = node;

        for(i=2; i<=pos; i++)
        {
            preNode = toDelMid;
            toDelMid = toDelMid->next;

            if(toDelMid == NULL)
                break;
        }
        if(toDelMid != NULL)
        {
            if(toDelMid == node)
                node = node->next;

            preNode->next = toDelMid->next;
            toDelMid->next = NULL;
            free(toDelMid);
        }
        else
        {
            printf(" Remove can not be possible from that position.");
        }
    }
}

void display()
{
    struct node *tmp;
    if(node == NULL)
    {
        printf(" No data found in the list.");
    }
    else
    {
        tmp = node;
        while(tmp != NULL)
        {
            printf(" Data = %d\n", tmp->num);
            tmp = tmp->next;
        }
    }
}
int main()
{
    int n,num,pos;
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNode(n);

    printf("\n Data entered in the list are : \n");
    display();

    printf("\n Input the position of node to delete : ");
    scanf("%d", &pos);

    if(pos<=1 || pos>=n)
    {
     printf("\n remove can not be possible from that position.\n ");
    }
	      if(pos>1 && pos<n)
      {
       printf("\n Removed successfully.\n ");
	   MiddleNodeDeletion(pos);
      }

	    printf("\n The new list are  : \n");
    displayList();
    return 0;
}
