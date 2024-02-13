//Create a linkedlist & print this list

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}Node;

void printLinkedlist(Node *p) {
  while (p != NULL) {
    printf("%d ", p->data);
    p = p->next;
  }
}

int main()
{
    Node * head;
    Node * first = NULL;
    Node * second = NULL;
    Node * third = NULL;
    Node * fourth = NULL;

    first= (Node*)malloc(sizeof(Node));
    second = (Node*)malloc(sizeof(Node));
    third = (Node*)malloc(sizeof(Node));
    fourth = (Node*)malloc(sizeof(Node));
        first->data=1;
        first->next=second;
        second->data=2;
        second->next=third;
        third->data=3;
        third->next=fourth;
        fourth->data=4;
        fourth->next=NULL;

    head = first;
    printLinkedlist(head);
}

