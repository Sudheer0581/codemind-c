#include<stdio.h>
int main()
{
    int n,chek,rem,pal=0;
    scanf("%d",&n);
    chek=n;
    while(n!=0)
    {
        rem=n%10;
        pal=rem+(pal*10);
        n=n/10;
    }
    if(chek==pal)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}