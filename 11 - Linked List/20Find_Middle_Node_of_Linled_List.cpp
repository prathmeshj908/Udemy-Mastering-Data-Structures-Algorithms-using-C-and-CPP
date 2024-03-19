#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first=nullptr;

void create(int A[],int n){
    struct Node *t,*last;
    first=new struct Node;
    first->data=A[0];
    first->next=nullptr;
    last=first;

    for(int i=1;i<n;i++){
        t= new struct Node;
        t->data=A[i];
        t->next=nullptr;
        last->next=t;
        last=t;
    }
}
void display(struct Node *p){
    while(p != nullptr){
        cout<<p->data<<" ";
        p=p->next;
    }
}

void middle(struct Node *p){
    struct Node *q;
    p=q=first;
    while(q != nullptr){
        q=q->next;
        if(q) q=q->next;
        if(q) p=p->next; 
    }
    cout<<"Middle Number of Linked List = "<<p->data<<" "<<p->next<<endl;
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
    cout<<"Enter a Size of Linked List = ";
    cin>>n;
    int A[n];
    cout<<"Enter a Elements of Linked List = ";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    create(A,n);
    cout<<"Elements of Linked List = ";
    display(first);
    cout<<endl;
    middle(first);
    freeList(first);
    first =nullptr;
    return 0;
}