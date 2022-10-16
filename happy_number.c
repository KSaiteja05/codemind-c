#include<stdio.h>
int main()
{
    int n,r,s=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        s=s+r*r;
        n=n/10;
        if(n==0 and s>9)
        {
            n=s;
            s=0;
        }
    }
    if(s==1 or s==7)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}