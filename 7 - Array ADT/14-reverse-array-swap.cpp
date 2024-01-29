#include <iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};
int Reverse(struct array *arr)
{
    for(int i=0, j=arr->length-1;i<j;i++,j--)
    {
        int temp=arr->A[i];
        arr->A[i]=arr->A[j];
        arr->A[j]=temp;
    }
    return 0;
}
void display(struct array arr)
{
    for(int i=0;i<arr.length;i++)
        cout<<arr.A[i];
}

int main()
{
    struct array arr={{1,2,3,4,5},10,5};
    Reverse(&arr);
    display(arr);
}