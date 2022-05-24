#include<stdio.h>
int main()
{
    int n,i,j,s=0,s1=0,arr[1000][1000],a,b;
    scanf("%d %d",&a,&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(i%2==0)
            {
                s=s+arr[i][j];
            }
            else
            {
                s1=s1+arr[i][j];
            }
            
        }
    }
    printf("%d %d",s,s1);
}