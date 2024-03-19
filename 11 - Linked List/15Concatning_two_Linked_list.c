#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*first=NULL, *second=NULL, *third= NULL;
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
void create2(int A[],int n){
    struct Node *t,*last;
    second=(struct Node*)malloc(sizeof(struct Node));
    second->data=A[0];
    second->next=NULL;
    last=second;

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
void concatnating(struct Node *p,struct Node *q){
    p=first;
    while(p->next != NULL){
        p=p->next;
    }
    p->next=q;
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
    int B[]={6,7,8,9,10};
    create(A,5);
    printf("Elements of first array = ");
    display(first);
    create2(B,5);
    printf("\nElements of second array = ");
    display(second);
    concatnating(first,second);
    printf("\nElements of arrays after concatnating = ");
    display(first);
    freeList(first);
    first=NULL;
    return 0;
}
