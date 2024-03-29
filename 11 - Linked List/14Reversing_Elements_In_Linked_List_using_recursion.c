#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[],int n)
{
    struct Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    
    for(int i=1;i<n;i++){
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct Node *p){
    while(p != NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}
void freeList(struct Node *p) {
    struct Node *temp;
    while (p != NULL) {
        temp = p;
        p = p->next;
        free(temp);
    }
}
void Reverse(struct Node *q,struct Node *p){
    if(p != NULL){ 
        Reverse(p,p->next);
        p->next=q;
    }
    else first=q;
}
int main(){
    int A[]={1,2,3,4,5};
    create(A,5);
    printf("Elements in Linked List = ");
    display(first);
    printf("\nReverse of Linked List = ");
    Reverse(NULL,first);
    display(first);
    freeList(first);
    first=NULL;
    return 0;
}