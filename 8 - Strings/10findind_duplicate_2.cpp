#include <iostream>
using namespace std;

int main()
{
    char A[]="finding";
    int i;
    long int j=0, x=0;
    for(i=0;A[i] !='\0';i++)
    {
        x=1;
        x=x<<(A[i]-97);
        if((j&x) > 0)
           cout<<"Duplicate is present "<<A[i]<<endl;
        else
           j=(j | x);
    }
    return 0;
}