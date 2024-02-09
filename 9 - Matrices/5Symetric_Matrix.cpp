
#include <iostream>
#include <vector>
using namespace std;

struct symetric
{
    vector<int>A;
    int n;
};
void set(struct symetric &v,int i,int j,int k)
{
    if(i<=j)
        {
            v.A[i * v.n + j]=k;
        }
    else
        {
            v.A[j*v.n +i]=k;
        }
}
void display(struct symetric v)
{
    for(int i=0;i<v.n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << v.A[i * v.n + j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    struct symetric v;
    v.n=3;
    v.A.resize(v.n*v.n);

    set(v, 0, 0, 1);
    set(v, 0, 1, 1);
    set(v, 0, 2, 1);
    set(v, 1, 0, 1);
    set(v, 1, 1, 2);
    set(v, 1, 2, 2);
    set(v, 2, 0, 1);
    set(v, 2, 2, 2);
    set(v, 2, 2, 3);

    display(v);
    return 0;
}
