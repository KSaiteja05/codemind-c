#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,x=0,y=0;
    scanf("%d",&n);
    while(n)
    {
        if(a<n)
        {
            x=a;
        }
        if(a>n)
        {
            y=a;
            break;
        }
        c=a+b;
        a=b;
        b=c;
    }
    if(n-x<y-n)
    {
        printf("%d",x);
    }
    else if(n-x==y-n)
    {
        printf("%d %d",x,y);
    }
    else
    {
        printf("%d",y);
    }
}