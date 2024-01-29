#include <iostream>
using namespace std;

void duplicate(char *A)
{
	int i;
	int j;
	int B[26]={0};
	for(i=0;A[i] !='\0';i++)
	{
		B[A[i]-97]+=1;
	}
	for(j=0;j<26;j++)
	{
		if(B[j]>1)
		   cout<<"Duplicate is found ="<<(char)(j+97)<<endl; 
		
	}
	if (j == 26)
        cout << "Duplicate is not found "<<endl; 	
}

int main()
{
	char A[]="Prathmesh";
	duplicate(A);
}

