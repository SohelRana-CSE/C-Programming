#include<stdio.h>
#include<stdlib.h>

typedef struct rana
{
    int data;
    struct rana*next;
}rana;

  rana*head=NULL;
  void push(int number)
{
    rana*temp=(rana*)malloc(sizeof(rana));

    temp->data=number;
    temp->next=head;
    head=temp;
}

void printstack()
{
    rana*top=head;
    printf("The Stack is: \n");

    while(top != NULL)
    {
        printf("%d,",top->data);

        top=top->next;
    }
    printf("\n");
}

int main()
{
    push(100);
    push(55);
    push(33);
    push(2);
    push(1);


    printstack();
    return 0;
}
