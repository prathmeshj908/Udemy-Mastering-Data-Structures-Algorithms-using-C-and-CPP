#include <iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};

int get(struct array arr,int index)
{
    for(int i=0;i<arr.length;i ++)
    {
        if(i==index)
        return arr.A[i];
    }
    return -1;
}

void display(struct array arr)
{
    for(int n=0;n<arr.length;n++)
        cout<<arr.A[n];
}

int main()
{
    struct array arr={{1,2,3,4,5},10,5};

    cout<<get(arr,4)<<endl;
    display(arr);
    return 0;
}