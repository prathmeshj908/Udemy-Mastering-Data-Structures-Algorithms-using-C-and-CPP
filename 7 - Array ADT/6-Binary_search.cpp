#include <iostream>
using namespace std;

struct array
{
    int A[10];
    int size;
    int length;
};
int binary(struct array arr,int key)
{
int l=0;
int h=arr.length-1;
while(l<=h)
{
  int mid=(l+h)/2; 
  if(key==arr.A[mid])
     return mid;
  else if(key<arr.A[mid]) 
      h=mid-1;
  else
      l=mid+1;
}
return -1;
}

void display(struct array arr)
{
    for(int i=0;i<arr.length;i++)
    cout<<arr.A[i];
}

int main()
{
    struct array arr={{1,2,3,4,5,6,7,9,10,11},10,10};

    cout<<binary(arr,4)<<endl;
    display(arr);
}