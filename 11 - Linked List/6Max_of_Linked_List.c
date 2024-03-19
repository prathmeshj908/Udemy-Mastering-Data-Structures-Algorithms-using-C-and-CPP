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
        last=t;
    }
}
void display(struct Node *p){
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
}
int Max(struct Node *p){
    int max=INT_MIN;
    while(p){
        if(p->data > max){
            max=p->data;
            p=p->next;
        }
    }
    return max;
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
    printf("\nMaximum element of Linked List = %d ",Max(first));
    freeList(first);
    first=NULL;
    return 0;
}