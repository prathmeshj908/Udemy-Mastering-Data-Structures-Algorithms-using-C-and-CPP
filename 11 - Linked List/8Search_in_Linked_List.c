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
int Search(struct Node *p,int key){
    while(p){
        if(p->data==key){ 
            return p->next;
            break;
        }
        p=p->next;
    }
    return -1;
}
int main(){
    int A[]={1,2,3,4,5};
    create(A,5);
    display(first);
    printf("\nKey is found = %d ",Search(first,4));
    freeList(first);
    first=NULL;
    return 0;
}