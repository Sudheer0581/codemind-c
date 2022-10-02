#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,k=0,j,count_p=0,count_dig=0,c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=1;j<=1000;j++)
    {
        while(k<n)
        {
            if(arr[k]==j)
            {
                count_dig+=1;
            }
            k++;
        }
        k=0;
        if(count_dig!=0)
        {
            count_p=count_p+(int)(count_dig/2);
            count_dig=0;
        }
    }
    printf("%d",count_p);
}