#include <iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};

float avg(struct array arr)
{
    int n=0;
    for(int i=0;i<arr.length;i++)
    {
    n+=arr.A[i];
    }
    return (float)n/arr.length;
}

int main()
{
    struct array arr={{1,2,3,4,5},10,5};
    cout<<avg(arr);
}