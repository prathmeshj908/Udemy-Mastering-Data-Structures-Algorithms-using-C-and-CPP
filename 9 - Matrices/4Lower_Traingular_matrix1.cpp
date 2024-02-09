#include <iostream>
#include <vector>
using namespace std;

struct LowerTri
{
    vector<int> A;
    int n;
};

void set(struct LowerTri &v, int i, int j, int k)
{
    if (i >= j)
        v.A[i * (i - 1) / 2 + j - 1] = k;
}

void display(const struct LowerTri &v)
{
    for (int i = 0; i < v.n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << v.A[i * (i + 1) / 2 + j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    struct LowerTri v;
    v.n = 5;
    v.A.resize(v.n * (v.n + 1) / 2);

    set(v, 1, 1, 1);
    set(v, 2, 1, 2);
    set(v, 2, 2, 3);
    set(v, 3, 1, 4);
    set(v, 3, 2, 5);
    set(v, 3, 3, 6);
    set(v, 4, 1, 7);
    set(v, 4, 2, 8);
    set(v, 4, 3, 9);
    set(v, 4, 4, 10);
    set(v, 5, 1, 11);
    set(v, 5, 2, 12);
    set(v, 5, 3, 13);
    set(v, 5, 4, 14);

    display(v);

    return 0;
}

