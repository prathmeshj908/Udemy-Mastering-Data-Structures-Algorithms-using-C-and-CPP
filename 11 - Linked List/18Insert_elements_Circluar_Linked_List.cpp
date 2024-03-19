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
        t->next=last->next;
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
void Insert(struct Node *p,int x,int pos){
    // p=head;
    struct Node *t=new struct Node;
    t->data=x;
    if(pos==0){
        t->next=head;
        while(p->next != head) p=p->next;
        p->next=t;
        t->next=head;
        head=t;
    }
    else{
        for(int i = 0;i< pos -1 ; i++) 
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
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
    int num,pos;
    cout<<"\nENter a Elements and Position you want to insert = ";
    cin>>num>>pos;
    Insert(head,num,pos);
    cout<<"Elements of Circular Linked List After Insersation = ";
    display(head);
    freeList(head);
    head = nullptr;
    return 0;
}