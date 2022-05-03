#include<stdio.h>
int main()
{
    int i=0,n,j,temp,a[100],r,k,f=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        a[i]=r;
        n=n/10;
        i++;
    }
    // a[100]=5 1 2 3
    // r=3 2 1 5
    for(j=0;j<i-1;j++)
    {
        for(k=j+1;k<i;k++)
        {
            if(a[j]==a[k])
            {
                f=1;
                break; // 5 4 5 3 2
            }
        }
        if(f==1)
        {
            break;
        }
    }
    if(f==1)
    {
        printf("Not Unique Number");
    }
    else
    {
        printf("Unique Number");
    }
}