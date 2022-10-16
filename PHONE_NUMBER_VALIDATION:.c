#include<stdio.h>
int main()
{
    long long int n,cnt=0,r;
    scanf("%lld",&n);
    while(n)
    {
        r=n%10;
        n=n/10;
        cnt+=1;
    }
    if(r!=0 and cnt==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}