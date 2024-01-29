#include <iostream>
#include <vector>
using namespace std;

int main()
{
    char A[]="observe";
    char B[]="verbose";
    int x[26]={0};
    
    int i;
    for(i=0;A[i] !=0;i++)
    {
        x[A[i]-97]+=1;
    }
    for(i=0;B[i] !=0;i++)
    {
        x[B[i]-97]-=1;
        if(x[B[i]-97]<0)
        {
            cout<<"String is not a Anagram"<<endl;
            break;
        }
    }
    if(B[i]=='\0')
       cout<<"String is a Anagram"<<endl;
    
    return 0;
}