#include<stdio.h>
int main()
{
    int i,j,n,f=0;
    scanf("%d",&n);
    for(i=0;i<n/2;i++)
    {
        for(j=i+1;j<n/2+1;j++) 
        {
            if(n==(i*i)+(j*j)/2)
            {
                f=1;
                break;
            }
        }
    }
    if(f==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}