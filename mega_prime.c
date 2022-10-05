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
int isdig(int n)
{
    int r;
    while(n)
    {
        r=n%10;
        if(isprime(r)==0) return 0;
        n=n/10;
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(isprime(n)==1 and isdig(n)==1)
    {
        printf("Mega Prime");
    }
    else
    {
        printf("Not Mega Prime");
    }
}