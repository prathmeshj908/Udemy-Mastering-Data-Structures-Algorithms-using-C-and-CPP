#include <iostream>
#include <vector>
using namespace std;

struct matrix
{
    vector<int>v;
    int n;
    matrix(int size): v(size,0), n(size) {}
};
void set(matrix &m,int i,int j,int k)
{
    if(i==j)
       m.v[i-1]=k;
}
void get(const matrix &m,int i,int j)
{
    if(i==j)
       cout<<m.v[i-1];
    else 
       cout<<0;
}
void display(const matrix &m)
{
    for(int i=0;i<m.n;i++)
    {
        for(int j=0;j<m.n;j++)
        {
            if(i==j)
               cout<<m.v[i]<<" ";
            else
                cout<<"0 ";
        }cout<<endl;

    }
}
int main()
{
    matrix m(5);
    set(m, 1, 1, 1);
    set(m, 2, 2, 2);
    set(m, 3, 3, 3);
    set(m, 4, 4, 4);
    set(m, 5, 5, 5);

    display(m);

    return 0;
}