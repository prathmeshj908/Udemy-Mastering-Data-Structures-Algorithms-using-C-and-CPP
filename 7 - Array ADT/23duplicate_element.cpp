#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>v;
    v={1,2,3,3,3,4,5,5,5,5,6,7,7,8,8};
    vector<int> v1(9,0);
    for(int i=0;i<v.size();i++)
        if(v[i]==v[i+1])
            v1[v[i]]++;

    for(int n=0;n<v1.size();n++)
        if(v1[n]>=1)
            cout<<n<<" "<<"appearing"<<" "<<v1[n]<<" "<<"times"<<endl;
    
    return 0;
}