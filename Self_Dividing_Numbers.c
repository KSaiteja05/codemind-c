#include<stdio.h>
int isselfd(int n)
{
    int x=n,r;
    while(n)
    {
        r=n%10;
        if(r==0) return 0;
        if(x%r!=0)
        {
            return 0;
        }
        n=n/10;
    }
    return 1;
}
int main()
{
    int a,b;
    scanf("%i",&a);
    scanf("%i",&b);
    for(int i=a;i<=b;i++)
    {
        if(isselfd(i)==1)
        {
            printf("%i ",i);
        }
    }
}