#include<stdio.h>
int ispalin(int n)
{
    int r,s=0,x=n;
    while(n)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(x==s) return 1;
    else return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int m=n,q=n,x,y;
    while(n)
    {
        n+=1;
        if(ispalin(n)==1)
        {
            x=n;
            break;
        }
    }
    while(m)
    {
        m-=1;
        if(ispalin(m)==1)
        {
            y=m;
            break;
        }
    }
    if(x-q<q-y)
    {
        printf("%d",x);
    }
    else if(x-q==q-y)
    {
        printf("%d %d",y,x);
    }
    else
    {
        printf("%d",y);
    }
}