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
void Sum(struct Node *p){
    int sum=0;
    while(p !=NULL){
        sum+=p->data;
        p=p->next;
    }
    printf("\nSum of all Elements in Linked List = %d",sum);   
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
    int A[]={1,2,3,4,5};
    create(A,5);
    display(first);
    Sum(first);
    return 0;
}
