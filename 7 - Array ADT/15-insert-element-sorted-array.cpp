#include <iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};
int insert(struct array *arr,int n)
{
    int i=arr->length-1;
    if(arr->length==arr->size)
       return 0;
    while(i>=0 && arr->A[i]>n)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=n;
    arr->length++;
}
void display(struct array arr)
{
    for(int i=0;i<arr.length;i++)
        cout<<arr.A[i];
}

int main()
{
    struct array arr={{1,4,9,14,25},10,5};
    insert(&arr,5);
    display(arr);
}