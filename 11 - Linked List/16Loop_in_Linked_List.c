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
        t=(struct node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct Node *p){
    printf("Elements in Linked List = ");
    while(p != NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}
void cheak(struct Node *f){
    struct Node *p,*q;
    p=q=f;
    do{
    q=q->next;
    q=q?q->next:q;
    p=f->next;
    }
    while(p && q && p != NULL);
    if(p==q) printf("Given Linked is loop ");
    else printf("Given Linked is not loop ");
}
void freeList(struct Node *p) {
    struct Node *temp;
    while (p != NULL) {
        temp = p;
        p = p->next;
        free(temp);
    }
}
int main(){
    struct Node *t1,*t2;
    int A[]={1,2,3,4,5};
    create(A,5);
    display(first);
    t1=first->next->next;
    t2=first->next->next->next->next;
    t2->next=t1;
    cheak(first);
    freeList(first);
    first=NULL;
}