#include<stdio.h>
int main()
{
    int s,n,a[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&s);
    int x=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<=s)
        {
            x+=1;
        }
        else
        {
            x+=2;
        }
    }
    printf("%d",x);
}