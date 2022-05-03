#include<stdio.h>
int main()
{
    int i,n,a[50],s=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        s=s+a[j];
    }
    printf("%d",s);
}