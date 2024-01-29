#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>v;
    v={6,7,10,11,12,15,19};
    int l=6;

    int diff=l-0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]-i != diff)
        {
            v.insert(v.begin()+i,(i+diff));
        }
    }
    for(int x:v)
       cout<<x<<" ";
    return 0;
}