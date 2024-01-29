#include <stdio.h>
int fun(int i)
{
    if (i>100)
         return i-10;
    return fun(fun(i+11));
    // printf("%d",i);
}

int main()
{
    int x;
    x=fun(30);
    printf("%d",x);
    return 0;
}