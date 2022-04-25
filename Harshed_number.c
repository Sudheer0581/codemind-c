#include<stdio.h>
int main()
{
    int n,temp,i,s=0;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        i=n%10;
        s=s+i;
        n=n/10;
    }
    if(temp%s==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}