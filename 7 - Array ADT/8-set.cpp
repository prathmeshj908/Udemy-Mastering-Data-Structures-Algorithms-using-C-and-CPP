#include <iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};
int set(struct array *arr,int index, int n)
{
    for(int i=0;i<arr->length;i++)
    {
        if(i==index)
        arr->A[i]=n;
    }
    return -1;
}
void display(struct array arr)
{
    for(int x;x<arr.length;x++)
        cout<<arr.A[x];
}

int main()
{
    struct array arr={{1,2,3,4,5},10,5};
    set(&arr,2,10);
    display(arr);
}