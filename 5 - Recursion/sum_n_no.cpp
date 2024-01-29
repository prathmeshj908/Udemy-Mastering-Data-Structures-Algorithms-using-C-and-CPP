# include <stdio.h>

int sum(int i)
{
    if (i==0)
        return 0;
    return sum(i-1)+i;
    
    

}

int main()
{
    int x;
    x=sum(10);
    printf("%d",x);
    return 0;
}