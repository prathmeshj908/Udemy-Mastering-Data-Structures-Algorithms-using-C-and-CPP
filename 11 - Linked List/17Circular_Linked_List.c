#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*head;

void create(int A[],int n){
    struct Node *t,*last;
    head=(struct Node*)malloc(sizeof(struct Node));
    head->data=A[0];
    head->next=head;
    last=head;

    for(int i=1;i<n;i++){
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}
void display(struct Node *p){
    
    do{
        printf("%d ",p->data);
        p=p->next;
    }
    while(p != head);
    // while (p != NULL) {
    //     printf("%d ", p->data);
    //     p = p->next;
    //     if (p == head) 
    //         break;
    // }
   
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
    int n;
    printf("Enter a Size of Circular Linked List = ");
    scanf("%d",&n);
    int A[n];
    printf("Enter a elements of Circular Linked List = ");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    create(A,n);
    printf("Elements of Circular Linked List = ");
    display(head);
    freeList(head);
    head=NULL;
    return 0;
}
 
