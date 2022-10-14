#include<stdio.h>
int isprime(int n)
{
    if(n<=1) return 0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int ispalin(int n)
{
    int x=n,r,s=0;
    while(n)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(x==s and isprime(s)==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n)
    {
        n+=1;
        if(ispalin(n)==1)
        {
            printf("%d",n);
            break;
        }
    }
}