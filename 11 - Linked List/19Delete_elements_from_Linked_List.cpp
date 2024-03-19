#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*head;

void create(int A[],int n){
    struct Node *t,*last;
    head=new struct Node;
    head->data=A[0];
    head->next=head;
    last=head;
    for(int i=1;i<n;i++){
        t=new struct Node;
        t->data=A[i];
        t->next = last->next;
        last->next=t;
        last=t;
    }
}
void display(struct Node *p){
    do{
        cout<<p->data<<" ";
        p=p->next;
    }
    while(p != head);
}
void Delete(struct Node *p,int pos){
    struct Node *q;
    if(pos == 0){
        while(p->next != head) p=p->next;
        int x=head->data;
        p->next=head->next;
        delete head;
        head=p->next;
    }
    else{
        for(int i=0; i< pos -1; i++)
            p=p->next;
        q=p->next;
        p->next=q->next;
        int x=q->data;
        delete q; 
    }
}
void freeList(struct Node *p)
{
    struct Node *temp;
    while(p != nullptr){
        temp = p;
        p = p->next;
        delete temp;
    }
}
int main(){
    int n;
    cout<<"ENter a Size of Circular Linked List = ";
    cin>>n;
    int A[n];
    cout<<"Enter a Elements of Circular Linked List = ";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    create(A,n);
    cout<<"Elements of Circular Linked List = ";
    display(head);
    int pos;
    cout<<"\nENter a Position you want to delete = ";
    cin>>pos;
    Delete(head,pos);
    cout<<"Elements of Circular Linked List After Deletion = ";
    display(head);
    freeList(head);
    head = nullptr;
    return 0;
}