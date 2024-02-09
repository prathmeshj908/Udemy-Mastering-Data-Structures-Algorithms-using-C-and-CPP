#include <iostream>
using namespace std;

struct LowerTri
{
    int A[10];
    int n;
};
void set(struct LowerTri *m,int i,int j,int k)
{
    if(i>=j)
       m->A[i * (i - 1) / 2 + (j- 1)]=k;
}
void display(struct LowerTri m)
{
    for(int i=0;i<m.n;i++)
    {
        for(int j=0;j<m.n;j++)
        {
            if(i>=j)
               cout<<m.A[i * (i - 1) / 2 + j] <<" ";
            else
                cout<<0<<" ";
        }
        cout<<endl;
    }

}
int main()
{
    struct LowerTri m;
    m.n=5;
    set(&m,1,1,1);
    set(&m,2,1,2);set(&m,2,2,3);
    set(&m,3,1,4);set(&m,3,2,5);set(&m,3,3,6);
    set(&m,4,1,7);set(&m,4,2,8);set(&m,4,3,9);set(&m,4,4,10);
    set(&m,5,1,11);set(&m,5,2,12);set(&m,5,3,13);set(&m,5,4,14);
    display(m);
    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// struct LowerTri
// {
//     vector<int> A;
//     int n;
// };

// void set(struct LowerTri &m, int i, int j, int k)
// {
//     if (i >= j)
//         m.A[i * (i - 1) / 2 + j - 1] = k;
// }

// void display(const struct LowerTri &m)
// {
//     for (int i = 0; i < m.n; i++)
//     {
//         for (int j = 0; j<m.n; j++)
//         {
//             if(i >= j)
//                 cout << m.A[i * (i + 1) / 2 + j] << " ";
//             else
//                 cout<<0<<" ";
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     struct LowerTri m;
//     m.n = 5;
    
//     // Initialize the vector with the required size
//     m.A.resize(m.n * (m.n + 1) / 2);

//     // Setting values in the lower triangular matrix
//     set(m, 1, 1, 1);
//     set(m, 2, 1, 2);
//     set(m, 2, 2, 3);
//     set(m, 3, 1, 4);
//     set(m, 3, 2, 5);
//     set(m, 3, 3, 6);
//     set(m, 4, 1, 7);
//     set(m, 4, 2, 8);
//     set(m, 4, 3, 9);
//     set(m, 4, 4, 10);
//     set(m, 5, 1, 11);
//     set(m, 5, 2, 12);
//     set(m, 5, 3, 13);
//     set(m, 5, 4, 14);
//     set(m, 5, 5, 15);

//     display(m);

//     return 0;
// }
