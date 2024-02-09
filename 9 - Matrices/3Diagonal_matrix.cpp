#include <iostream>
using namespace std;

class matrix
{
private:
   int n;
   int *A;
public:
   matrix(int n)
   {
    this->n=n;
    A=new int[n];
   }
   ~matrix()
   {
    delete []A;
   }
   int get(int i,int j);
   void set(int i, int j,int k);
   void display();
};
void matrix::set(int i,int j,int k)
{
    if(i==j) 
       A[i-1]=k;
}
int matrix::get(int i, int j)
{
    if(i==j)
       return A[i-1];
    else
       return 0;
}
void matrix:: display()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
               cout<<A[i]<<" ";
            else
               cout<<0<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    matrix m(5);
    m.set(1,1,1);
    m.set(2,2,2);
    m.set(3,3,3);
    m.set(4,4,4);
    m.set(5,5,5);

    m.display();
    m.get(4,4);
    return 0;
}