#include<stdio.h>
int fact(int n)
{
    int s=1;
    for(int i=1;i<=n;i++)
    {
        s*=i;
    }
    return s;
}
int main()
{
    int n,r,s=0,m;
    scanf("%d",&n);
    m=n;
    while(n)
    {
        r=n%10;
        s+=fact(r);
        n=n/10;
    }
    if(s==m)
    {
        printf("The number %d is a strong number",m);
    }
    else
    {
        printf("The number %d is not a strong number",m);
    }
}