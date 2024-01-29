# include <stdio.h>

void fun1(int i);
void fun(int i)
{
    if (i>0)
    {
        printf("%d",i);
        fun1(i-1);
    }
    
}

void fun1(int i)
{
    printf("%d",i);
    fun(i/2);
}
int main()
{
    int x=20;
    fun(x);
    return 0;
}