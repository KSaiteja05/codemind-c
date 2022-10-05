#include<stdio.h>
int main()
{
    int n,r,s=0,p=1,m;
    m=n;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        s=s+r;
        p=p*r;
        n=n/10;
    }
    printf("%d",p-s);
}