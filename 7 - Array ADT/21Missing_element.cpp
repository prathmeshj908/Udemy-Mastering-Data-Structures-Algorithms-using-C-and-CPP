#include <iostream>
using namespace std;

int main()
{
    int A[]={5,3,2,10,7};
    int l=1;
    int max=10;
    int *p=new int[max + 1]{0};
    for(int i=0;i<5;i++)
    {
        p[A[i]]++;
    }
    cout << "Missing elements: ";
    for(int n=1;n<max;n++)
    {
        if(p[n]==0)
        {
            cout<<n<<" ";
        }
    }
    delete []p;
    p=nullptr;
    return 0;
}
