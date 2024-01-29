#include <iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int binary(struct array *arr,int k)
{
    for(int i=0;i<arr->length;i++)
    {
        if(k==arr->A[i])
        {
        // swap(arr->A[i],arr->A[i-1]) Transposition;
        swap(arr->A[i],arr->A[0]);
        return i;
        }
    }
    return -1;
}

void display(struct array arr)
{
    for(int n=0;n<arr.length;n++)
       cout<<arr.A[n];
}

int main()
{
    struct array arr={{1,2,3,4,5,6,7,8,9,10},10,10};

    cout<<binary(&arr,4)<<endl;
    display(arr);
}