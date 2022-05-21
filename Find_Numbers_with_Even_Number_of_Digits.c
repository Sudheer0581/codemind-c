#include<stdio.h>
int main()
{
    int i,arr[100],n,c=0,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        while(arr[i]) // 12 
        {
            c+=1; //3
            arr[i]=arr[i]/10; //1 0
        }
        if(c%2==0) // 0
        {
            s+=1; //1
        }
        c=0;
    }
    printf("%d",s);
}