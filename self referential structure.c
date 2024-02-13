/*#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int x,y;
    struct Node *next;
};
typedef struct Node node;
int main()
{
    node *head;
    head=(node*)malloc(sizeof(node));
    head->x=10;
    head->y=15;
    head->next=Null;
    printf("%d %d\n", head->x, head->y);
    return 0;
}
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int x,y;

    struct node*next
}*head;

int main()
{

    head=(struct node*)malloc(sizeof(struct node));

    head->x=10;
    head->y=15;
    head->next=NULL;

    printf("%d %d\n",head->x,head->y);
    return 0;
}
