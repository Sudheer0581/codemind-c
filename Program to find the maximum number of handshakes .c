#include<stdio.h>
int main()
{
    int n,handshakes;
    scanf("%d",&n);
    handshakes=n*(n-1)/2;
    printf("%d",handshakes);
}