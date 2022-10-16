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
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int n=a+b;
    int x=n;
    if(isprime(n)==1)
    {
        n=n+1;
    }
    while(n)
    {
        if(isprime(n)==1)
        {
            printf("%d",n-x);
            break;
        }
        n+=1;
    }
}