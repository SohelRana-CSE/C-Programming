#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
int data;
struct node *point;

}Node;


void createlist()
{


    Node firstnode=(Node)malloc(sizeof(Node));
    firstnode->data=100;
    firstnode->point=NULL;
    head=firstnode;

    Node secondnode=(Node)malloc(sizeof(Node));
    secondnode->data=1;
    secondnode->point=NULL;
    firstnode->point=secondnode;

    Node thirdnode=(Node)malloc(sizeof(Node));
    thirdnode->data=20;
    thirdnode->point=NULL;
    secondnode->point=thirdnode;


    Node fourthnode=(Node)malloc(sizeof(Node));
    fourthnode->data=15;
    fourthnode->point=NULL;
    thirdnode->point=fourthnode;

    Node fifthnode=(Node)malloc(sizeof(Node));
    fifthnode->data=10;
    fifthnode->point=NULL;
    fourthnode->point=fifthnode;

}


void search( int num )
{
    struct node* current = head;

    if( head == NULL ) {
        printf( "The search did not find the element you are looking for, try with another number\n" );
        return;
    }

    while( current->num != num ) {
        if( current->next == NULL ) {
            printf( "The search did not find the element you are looking for, try with another number\n" );
            return;
        }
        else {
            current = current->next;
        }
    }

	printf( "%d is found\n" num );

    return;
}
