#include<iostream>
using namespace std;

void vowel(char *A)
{
    int i;
    int v=0;
    for(i=0;i<A[i] !='\0';i++)
    {
        if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u')
        {
            cout<<A[i]<<" ";
            v++;
        }
        else if(A[i]=='A' || A[i]=='E' || A[i]=='I' || A[i]=='O' || A[i]=='U')
        {
            cout<<A[i]<<" ";
            v++;
        }
    }
    cout<<v<<" "<<endl;
}
int main()
{
    char A[]="How are you";
    vowel(A);
    cout<<A<<" ";
}