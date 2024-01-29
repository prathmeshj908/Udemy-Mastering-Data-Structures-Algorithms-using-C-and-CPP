# include <iostream>
# include <stdio.h>
using namespace std;

void fun1(int i)
{
    if (i>0)
    {
        printf("%d",i);
        fun1(i-1);
    }
}

int main()
{
    int x=3;
    fun1(x);
    return 0;
}