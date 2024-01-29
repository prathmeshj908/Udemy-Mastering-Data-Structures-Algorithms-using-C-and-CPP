#include <iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};

int Reverse(struct array *arr )
{
    int *B;
    B=new int[arr->length];
    for(int i=arr->length-1,j=0;i>=0;i--,j++)
    {
        B[i]=arr->A[j];
    }
    for (int i=0;i<arr->length;i++)
    {
        arr->A[i]=B[i];
    }
    delete []B;
    B=nullptr;
    return 0;
}
void display(struct array arr )
{
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i];
    }
}

int main()
{
    struct array arr={{1,2,3,4,5,11,22,33,44,55},10,10};
    Reverse(&arr);
    display(arr);
}