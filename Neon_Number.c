#include<stdio.h>
int main()
{
    int n,r,s=0;
    scanf("%d",&n);
    int sq=n*n;
    while(sq)
    {
        r=sq%10;
        s+=r;
        sq=sq/10;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}