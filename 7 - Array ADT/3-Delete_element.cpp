#include <iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};

int Delete(struct array *arr,int index)
{
    int x;
    int i;
    if(index>=0 && index<arr->length)
    {
        x=arr->A[index];
        for(i=index;i<arr->length;i++)
            arr->A[i]=arr->A[i+1];
        arr->length--;
        return x;
    }
    return 0;
}

void display(struct array arr)
{
    int n;
    cout<<"Elements are"<<endl;
    for(int n=0;n<arr.length;n++)
       cout<<arr.A[n]<<endl;
}
int main()
{
    struct array arr={{1,2,3,4,5},10,5};
    Delete(&arr,3);
    display(arr);
    return 0;
}

