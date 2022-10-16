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
int main()
{
    int n;
    scanf("%d",&n);
    int i=1,j=1,p=0,x,y;
    for(int i=2;i<n;i++)
        {
            for(int j=2;j<n;j++)
            {
                if(i*j==n and isprime(i)==1 and isprime(j)==1)
                {
                    p=1;
                    x=i;
                    y=j;
                    break;
                }
            }
        }
    if(p==1)
    {
        printf("%d %d",y,x);
    }
    else
    {
        printf("%d",-1);
    }
}