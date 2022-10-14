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
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=n;i<=m;i++)
    {
        if(isprime(i)==1)
        {
            printf("%d
",i);
        }
    }
}