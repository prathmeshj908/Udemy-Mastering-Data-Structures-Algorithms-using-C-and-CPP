#include <iostream>
#include <vector>
using namespace std;

// int main()
// {
//     vector<int>v;
//     int duplicate=0;
//     v={1,2,3,4,5,5,5,6,7,7,8};
//     for(int i=0;i<v.size();i++)
//     {
//         if(v[i]==v[i+1] && v[i] !=duplicate)
//         {
//             cout<<v[i]<<" ";
//             duplicate=v[i];
//         }
//     }
//     return 0;
// }

int main()
{
    int A[]={1,2,2,3,4,5,5,5,6,7,7,8};
    int n=12;
    for(int i=0;i<n-1;i++)
    {
        if(A[i]==A[i+1])
        {
            int j=i+1;
            while(A[j]==A[i])j++;
            cout<<A[i]<<" "<<"is appearing"<<" "<<j-i<<" "<<"times"<<endl;
            i=j-1;
        }
    }
    return 0;
}