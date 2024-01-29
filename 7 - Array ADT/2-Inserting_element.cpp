#include <iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};

void display(struct array arr)
{
    int n;
    for(n=0;n<arr.length;n++)
    {
        cout<<arr.A[n]<<endl;
    }
}

void insert(struct array *arr,int index,int x)
{
    if(index>=0 && index<=arr->length)
    {
        for(int i=arr->length;i>index;i--)
            arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->length++;
    }
}

int main()
{
    struct array arr={{1,2,3,4,5},10,10};
    insert(&arr,5 ,10);
    display(arr);
    return 0;
}