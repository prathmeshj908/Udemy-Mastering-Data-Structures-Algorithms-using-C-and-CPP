#include <iostream>
using namespace std;

struct matrix
{
    int A[10];
    int n;
};
void set(struct matrix *m,int i,int j,int k)
{
    if(i==j)
       m->A[i-1]=k;
}
int get(struct matrix m, int i,int j)
{
    if(i==j)
       return m.A[i-1];
    else 
       return 0;
}
void display(struct matrix m)
{
    for(int i=0;i<m.n;i++)
    {
        for(int j=0;j<m.n;j++)
        {
            if(i==j)
               cout<<m.A[i]<<" ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
}
int main()
{
    struct matrix m;
    m.n=5;
    set(&m,1,1,1);set(&m,2,2,2);set(&m,3,3,3);set(&m,4,4,4);set(&m,5,5,5);
    get(m,2,2);
    display(m);
    return 0;
}