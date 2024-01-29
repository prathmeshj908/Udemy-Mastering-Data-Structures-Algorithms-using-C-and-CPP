#include <iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};
int sum(struct array arr)
{
    int n=0;
    for(int i=0;i<arr.length;i++)
    {
        n+=arr.A[i];
    }
    return n;
}
void display(struct array arr)
{
    for(int x=0;x<arr.length;x++)
    cout<<arr.A[x];
}

int main()
{
    struct array arr={{1,2,3,4,5},10,5};
    cout<<sum(arr)<<endl;
    display(arr);
}