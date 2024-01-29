#include <iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};
int Min(struct array arr)
{
    int n=arr.A[0];
    for(int i=1;i<arr.length;i++)
    {
        if(arr.A[i]<n)
        n=arr.A[i];
    }
    return n;
}

void display(struct array arr)
{
    for(int i=0;i<arr.length;i++)
    cout<<arr.A[i];
}

int main()
{
    struct array arr={{22,55,11,66,1},10,5};
    cout<<Min(arr)<<endl;
    display(arr);
}