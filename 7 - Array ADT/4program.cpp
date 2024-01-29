#include <iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};
void insert(struct array *arr, int index, int x)
{
    if(index>=0 && index<=arr->length)
    {
        for(int n=arr->length;n>index;n--)
            arr->A[n]=arr->A[n-1];   
        arr->A[index]=x;
        arr->length++;
    }
}
// int Delete(struct array *arr, int index)
// {

// }

void display(struct array arr)
{
    int i;
    for(i=0;i<arr.length;i++)
    cout<<arr.A[i];
}
int main()
{
    struct array arr={{1,2,3,4,5},10,5};

    insert(&arr, 3,10);
    display(arr);
    // Delete(&arr, 4);

    // display(&arr);
    return 0;
}
