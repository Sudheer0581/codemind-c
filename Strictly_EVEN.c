#include<stdio.h>
int main()
{
    int arr[100],i,n,c=0,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0 && i%2==0)
        {
            c+=1;
        }
        if(arr[i]%2==0)
        {
            f+=1;
        }
    }
if(c==f)
{
    printf("True");
}
else
{
       printf("False");
}
}