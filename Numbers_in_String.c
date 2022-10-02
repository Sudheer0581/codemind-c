#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char st[100];
    scanf("%[^
]s",st);
    int i,s=0;
    for(i=0;i<strlen(st);i++)
    {
        if(isdigit(st[i]))
        {
            s=s+st[i]-48;
        }
    }
    printf("%d",s);
}