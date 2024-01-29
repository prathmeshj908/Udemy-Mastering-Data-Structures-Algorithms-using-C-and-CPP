#include <iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};
int Max(struct array arr)
{
    int n=arr.A[0];
    for(int i=1;i<arr.length;i++)
    {
        if(arr.A[i]>n)
            n=arr.A[i];
    }
    return n;
}

int main()
{
    struct array arr={{10,2,22,45,5},10,5};
    cout<<Max(arr);
    // display(arr);
}