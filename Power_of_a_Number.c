#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    d=pow(a,b);
    e=d%c;
    printf("%d",e);
}