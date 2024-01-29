#include <stdio.h>
int fuct(int n)
{
    if (n==0)
        return 1;
    return fuct(n-1)*n;
}

int main()
{
    int x;
    x=fuct(5);
    printf("%d",x);
    return 0;
}