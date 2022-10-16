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
        int m=n,x,y, q=n;
        while(n)
        {
            if(isprime(n)==1)
            {
                x=n;
                break;
            }
            else
            {
                n+=1;
            }
        }
        while(m)
        {
            if(isprime(m)==1)
            {
                y=m;
                break;
            }
            else
            {
                m-=1;
            }
        }
        if(x-q<q-y)
        {
            printf("%d
",x-q);
        }
        else
        {
            printf("%d
",q-y);
        }
}