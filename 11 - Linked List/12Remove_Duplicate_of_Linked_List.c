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
void removeDuplicates(struct Node *p){
    struct Node *q = p->next;
    while(q != NULL){
        if(q->data != p->data){
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
            free(q);
            q=p->next;
        }
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
    int A[]={1,1,1,2,2,3,4,5,5};
    create(A,9);
    display(first);
    printf("\nLinked List after Removing Duplicate \n");
    removeDuplicates(first);
    display(first);
    freeList(first);
    first=NULL;
    return 0;
}