#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * prev;
    struct node * next;
}*head, *last;


void createList(int n);
void displayList();



int main()
{
    int n, choice;

    head = NULL;
    last = NULL;

    printf("Enter the nodes number you want to create: ");
    scanf("%d", &n);

    createList(n); // Create list of n nodes

    printf("\nPress 1 to display all nodes");
    scanf("%d", &choice);

    if(choice==1)
    {
        displayList();
    }
    return 0;
}



void createList(int n)
{
    int i, data;
    struct node *newNode;

    if(n >= 1)
    {
        head = (struct node *)malloc(sizeof(struct node));

        if(head != NULL)
        {
            printf("Enter data of 1 node: ");
            scanf("%d", &data);

            head->data = data;
            head->prev = NULL;
            head->next = NULL;

            last = head;


            for(i=2; i<=n; i++)
            {
                newNode = (struct node *)malloc(sizeof(struct node));

                if(newNode != NULL)
                {
                    printf("Enter data of %d node: ", i);
                    scanf("%d", &data);

                    newNode->data = data;
                    newNode->prev = last; // Link new node with the previous node
                    newNode->next = NULL;

                    last->next = newNode; // Link previous node with the new node
                    last = newNode;
                }
                else
                {
                    printf("Unable to allocate memory.");
                    break;
                }
            }
        }

    }
}



void displayList()
{
    struct node * temp;
    int n = 1;

    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        printf("\n\nData in the list:\n");

        while(temp != NULL)
        {
            printf("%d ", n, temp->data);

            n++;


            temp = temp->next;
        }
    }
}


