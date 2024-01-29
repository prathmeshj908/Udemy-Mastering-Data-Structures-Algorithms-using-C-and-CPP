#include <iostream>
using namespace std;

int main()
{
    int A[]={1,4,4,5,5,6,6,2,2,2,3,3,6,6,7,8,8};
    int n=17;
    int *p=new int[9]{0};
    for(int i=0;i<n-1;i++)
        if(A[i]==A[i+1])
            p[A[i]]++;
    
    for(int n=0;n<=8;n++)
        if(p[n]>=1)
           cout<<n<<" "<<"is appearing for"<<" "<<p[n]<<" times"<<endl;

    delete []p;
    p=nullptr;
    return 0;
}