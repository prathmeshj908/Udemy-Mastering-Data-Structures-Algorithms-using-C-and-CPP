#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct Node{
    int data;
    struct Node *next;
}*first=NULL;
void create(int A[],int n)
{
    struct Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last = first;

    for(int i=1;i<n;i++){
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct Node *p){
    while(p !=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}
int sorted(struct Node *p){
    int x=0;
    while(p != NULL){
        if(x<p->data) {
            printf("\nGiven Linked List is sorted");
            return false;}
        else printf("Given Linked List is not sorted");
        x=p->data;
        p=p->next;
    }
    return true;
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
    sorted(first);
    freeList(first);
    first=NULL;
}