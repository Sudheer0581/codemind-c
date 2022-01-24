#include<stdio.h>
int main()
{
    int n,rem,sum=0,product=1,result;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        product=product*rem;
        sum=sum+rem;
        n=n/10;
    }
    result=product-sum;
    printf("%d",result);
}