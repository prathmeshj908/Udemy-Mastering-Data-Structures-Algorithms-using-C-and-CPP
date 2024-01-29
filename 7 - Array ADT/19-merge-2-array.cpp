#include <iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};
struct array* merge(struct array *arr1,struct array *arr2)
{
    int i =0;
    int j =0;
    int k = 0;

    struct array *arr3 = new struct array;
    for(; i < arr1->length && j < arr2->length;)
    {
        if(arr1->A[i] < arr2->A[j])
           arr3->A[k++] = arr1->A[i++];
        else
            arr3->A[k++] = arr2->A[j++];
    }
    for(;i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];
    for(;j < arr2->length; j++)
        arr3->A[k++] = arr2->A[j];
    
    arr3->length = arr1->length + arr2->length;
    arr3->size=10;
    return arr3;
}
int display(struct array arr3)
{
    for(int i=0;i<arr3.length;i++)
        cout<<arr3.A[i]<<" ";
    
    return 0;
}

int main()
{
    struct array arr1={{2,5,9,11,21},10,5};
    struct array arr2={{1,3,15,17,22},10,5};
    struct array *arr3;
    arr3=merge(&arr1,&arr2);
    display(*arr3);
    delete arr3;
}