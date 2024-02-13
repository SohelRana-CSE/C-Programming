#include <stdio.h>
#include <stdlib.h>
struct Sohel{
int a;
struct Sohel *n;
};
typedef struct Sohel node;
node *p;
int main(void) {
node *n1, *n2, *n3;
n1=(node*)malloc(sizeof(node));
n2=(node*)malloc(sizeof(node));
n3=(node*)malloc(sizeof(node));
printList();
n1->a=5;
n1->n=n2;
n2->a=10;
n2->n=n3;
n3->a=20;
n3->n=NULL;
p=n1;
lastAdd(50);
printList();
return 0;
}
void lastAdd(int x){
node *tmp=(node*)malloc(sizeof(node));
node *nL=p;
while(nL->n){
    nL=nL->n;
}
tmp->n=NULL;
tmp->a=x;
nL->n=tmp;
}
void printList(){
    node *head=p;
while(head!=NULL){
    printf("%d ",head->a);
    head=head->n;
}
printf("\n");
}
