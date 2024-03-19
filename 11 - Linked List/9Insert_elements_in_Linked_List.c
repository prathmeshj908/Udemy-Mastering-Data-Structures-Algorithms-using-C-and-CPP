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
void Inseart(struct Node *p,int index,int size,int n){
    if(index<0 || index >size) return;
    struct Node *t;
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=n;
    if(index==0){
        t->next=first;
        first=t;
    }
    else{
        for(int i=0;i<index-1;i++)
            p=p->next;
        t->next=p->next;
        p->next=t;  
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
int main(){
    int A[]={1,2,3,4,5};
    create(A,5);
    Inseart(first,5,5,6);
    display(first);
    freeList(first);
    first=NULL;
    return 0;
}