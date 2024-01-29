#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // char A[]="JOHN";
    // cout<<A<<endl;
    // int i;
    // for(i=0;i<A[i] !=0;i++)
    // {}
    // cout<<i<<endl;
    vector<char> v;
    v={'J', 'O', 'H', 'N'};
    for (char c : v) {
        cout << c<<" ";
    }
    cout<<v.size();
    return 0;
}