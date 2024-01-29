int fun(int n)
{
    static int i=0;
    if (n>0)
    {
        i++;
        return fun(n-1)+i;
    }
    return 0;
}

int main()
{
    int x;
    x=fun(5);
    // printf("%d",x);
    return 0;
}