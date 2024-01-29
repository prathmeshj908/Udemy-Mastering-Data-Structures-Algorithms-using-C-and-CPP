#include <iostream>
using namespace std;

int main()
{
    char A[]="madam";
    int i;
    int j=0;
    for(i=0;A[i] !='\0';i++)
    {}
    i=i-1;
    while(i >= j)
    {
        if(A[i]!=A[j])
        {
            cout<<"String is not palindrome"<<endl;
            break;
        }   
        else
        {
           i--;
           j++; 
        }   
    }
    cout<<"String is palindrome"<<endl;
}