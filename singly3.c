#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

void print(node *s)
{
    while( s!= NULL)
    {
        printf("%d ", s->data);
        s = s->next;
    }
}

void InsertAtBeginning(node** ref, int data){
    node * NewNode= (node*)malloc(sizeof(node));

    NewNode->data= data;
    NewNode->next = (*ref);

    (*ref)= NewNode;
    printf("\n");
    }

void InsertAtEnd(node** ref, int data) {
  node* NewNode = (node*)malloc(sizeof(node));
  node* last = *ref;

  NewNode->data = data;
  NewNode->next = NULL;

    printf("\n");

  if (*ref == NULL) {
    *ref = NewNode;
    return;
  }

  while (last->next != NULL)
    last = last->next;

  last->next = NewNode;
  return;
}


// Insert a node after a node
void insertMiddle(node* node, int data) {
  if (node == NULL) {
    printf("the given previous node cannot be NULL ");
    return;
  }

  node * NewNode= (node*)malloc(sizeof(node));
  NewNode->data = data;
  NewNode->next = node->next;
  node->next = NewNode;

  printf("\n");
}



int main()
{
    node * head;
    node * one = NULL;
    node * two = NULL;
    node * three = NULL;

    one = (node*)malloc(sizeof(node));
    two = (node*)malloc(sizeof(node));
    three = (node*)malloc(sizeof(node));

    one-> data = 20;
    two-> data = 30;
    three-> data = 40;

    head = one;
    one-> next = two;
    two -> next = three;
    three -> next = NULL;

    print(head);
    InsertAtBeginning(&head ,10);
    print(head);
    InsertAtEnd(&head ,50);
    print(head);
    insertMiddle(&head ,100);
    print(head);
}
