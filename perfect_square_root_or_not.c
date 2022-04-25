#include<stdio.h>
int main()
{
    int i,n,flag=0;
    scanf("%d",&n);
    for(i=1;i<n/2;i++)
    {
        if(n==i*i)
        {
        flag=1;
        break;
            
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}