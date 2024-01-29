#include <iostream>
#include <vector>
using namespace std;

// void change(char *A)
// {
//     int i;
//     for(i=0;i<A[i] !=0;i++)
//     {
//         A[i]+=32;
//     }
// }
// int main()
// {
//     char A[]="WELCOME";
//     change(A);
//     cout<<A<<" ";
// }
void change(vector<char> &v)
{
    int i;
    for(i=0;i<v[i] !=0;i++)
    {
        v[i]+=32;
    }
}

int main()
{
    vector<char> v{'W','E','L','C','O','M','E'};
    change(v);
    for(char x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}