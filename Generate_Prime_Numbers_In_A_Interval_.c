#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    if(n==1)
    {
        return false;
    }
    for(i=2;i<=int(n/2);i++)
    {
        if(n%i==0)
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int i,n,m,flag;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=n;i<=m;i++)
    {
        if(prime(i))
        {
            printf("%d
",i);
        }
    }
}
