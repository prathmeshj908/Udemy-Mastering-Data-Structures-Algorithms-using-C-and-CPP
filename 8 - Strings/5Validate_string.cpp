#include <iostream>
using namespace std;

void validate(char *A)
{
   int i;
   for(i=0;i< A[i] !='\0';i++)
   {
     if(!((A[i]>=65 && A[i]<=90) || (A[i]>=97 && A[i]<=122) || (A[i]>=48 && A[i]<=57)) )
     {
        cout<<A[i]<<" is a Speacial charactor, String is not valid"<<endl;
     }
   }
}
int main()
{
    char A[]="Prathmeshj908$";
    validate(A);
}

