// #include <iostream>
// using namespace std;

// void reverse(char *A)
// {
//     int i;
//     int j = 0;

//     // Find the length of the string A
//     for (i = 0; A[i] != '\0'; i++)
//     {}
//     i = i - 1; // Set i to the last valid index

//     // Reverse the string using a while loop
//     while (i > j)
//     {
//         char temp = A[i];
//         A[i] = A[j];
//         A[j] = temp;
//         i--;
//         j++;
//     }
// }

// int main()
// {
//     char A[] = "welcome";
//     reverse(A);
//     cout << A << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

void reverse(char *A)
{
    int i;
    int j=0;
    
    for(i=0;A[i] !='\0';i++)
    {}
    i=i-1;
    while(i > j)
    {
        char temp=A[i];
        A[i]=A[j];
        A[j]=temp;
        j++;
        i--;
    }
}
int main()
{
    char A[]="welcome";
    reverse(A);
    cout<<A<<endl;
    return 0;
}