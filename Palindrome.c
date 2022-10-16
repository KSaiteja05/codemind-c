#include<stdio.h>
int main()
{
    int n,x,r,s=0;
    scanf("%d",&n);
    x=n;
    while(n)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(x==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}