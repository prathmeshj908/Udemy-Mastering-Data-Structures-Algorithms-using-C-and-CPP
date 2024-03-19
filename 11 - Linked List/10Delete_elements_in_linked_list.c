#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int count(struct Node *p)
{
    int count = 0;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }
    return count;
}

struct Node *deleteNode(struct Node *p, int n)
{
    struct Node *x = NULL;
    int a = -1;
    if (n <= 0 || n > count(p))
        return NULL;
    if (n == 1)
    {
        x = first;
        a = first->data;
        first = first->next;
        free(x);
        return first;
    }
    else
    {
        for (int i = 1; i < n - 1; i++)
        {
            p = p->next;
        }
        x = p->next;
        p->next = p->next->next;
        a = x->data;
        free(x);
        return first;
    }
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
void freeList(struct Node *p) {
    struct Node *temp;
    while (p != NULL) {
        temp = p;
        p = p->next;
        free(temp);
    }
}
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    create(A, 5);
    printf("Original list: ");
    display(first);
    first = deleteNode(first, 4);
    printf("List after deletion: ");
    display(first);
    freeList(first);
    first=NULL;
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// }*first=NULL;
// void create(int A[],int n){
//     struct Node *t,*last;
//     first=(struct Node*)malloc(sizeof(struct Node));
//     first->data=A[0];
//     first->next=NULL;
//     last=first;

//     for(int i=1;i<n;i++){
//         t=(struct Node*)malloc(sizeof(struct Node));
//         t->data=A[i];
//         t->next=NULL;
//         last->next=t;
//         last=t;
//     }
// }
// int count(struct Node *p) {
//     int count = 0;
//     while (p != NULL) {
//         count++;
//         p = p->next;
//     }
//     return count;
// }
// struct Node* deleteNode(struct Node *p,int n){
//     struct Node *x=NULL;
//     int a=-1;
//     if(n<=0 || n > count(p)) return NULL;
//     if(n==1){
//         x=first; 
//         a=first->data;
//         first=first->next;
//         free(x);
//         return first;
//     }
//     else{
//         for(int i=1;i<n-1;i++){
//             // x=p;
//             p=p->next;
//         }
//         x=p->next;
//         p->next=p->next->next;
//         a=p->data;
//         free (p);
//         return first;
//     }
// }
// void display(struct Node *p){
//     while(p != NULL){
//         printf("%d ", p->data);
//         p=p->next;
//     }
// }
// int main(){
//     int A[]={1,2,3,4,5};
//     create(A,5);
//     printf("Original list: ");
//     display(first);
//     first=deleteNode(first,4);
//     printf("List after deletion: ");
//     display(first);
//     return 0;
// }