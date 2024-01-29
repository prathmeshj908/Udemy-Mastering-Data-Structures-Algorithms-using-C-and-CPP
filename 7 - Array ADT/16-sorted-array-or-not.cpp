#include <iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};
int sort(struct array arr)
{
    for(int i=0;i<arr.length-1;i++)
    {
        if(arr.A[i]>arr.A[i+1])
        {
           return 0;
        }
    }
    return 1;
}
void display(struct array arr)
{
    for(int i=0;i<arr.length;i++)
        cout<<arr.A[i];
}

int main()
{
    struct array arr={{1,2,3,4,5},10,5};
    cout<<sort(arr)<<endl;
    display(arr);
}