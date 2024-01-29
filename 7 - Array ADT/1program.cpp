#include <iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};

void display(struct array arr)
{
    int i;
    printf("Elements are\n");
    for(i=0;i<arr.length;i++)
        printf("%d",arr.A[i]);
}


int main()
{
    struct array arr={{1,2,3,4,5},10,5};
    display(arr);
    return 0;
}