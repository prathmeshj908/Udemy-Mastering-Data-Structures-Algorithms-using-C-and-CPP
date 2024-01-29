#include<iostream>
#include<vector>
using namespace std;

int main()
{
    char A[]="How   are   u";
    int i;
    int w=1;
    for(i=0;i<A[i] !='\0';i++)
    {
        if(A[i]==' ' && (i == 0 || A[i - 1] != ' ')){
            w++;}
    }
    cout<<w<<endl;
    cout<<A;
}
