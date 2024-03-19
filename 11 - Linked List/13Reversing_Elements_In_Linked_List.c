#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*first=NULL;
void create(int A[],int n){
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
        last = t;
    }
}
void display(struct Node *p){
    while(p != NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}
void reverse(struct Node *p){
    p=first;
    struct Node *r=NULL;
    struct Node *q=NULL;
    while(p != NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first = q;
}
int main(){
    int A[]={1,2,3,4,5};
    create(A,5);
    printf("Elements in Linked List = ");
    display(first);
    printf("\nReverse of Linked List = ");
    reverse(first);
    display(first);
    return 0;
}
