#include<stdio.h>
int main()
{
    int n,p=1;
    scanf("%d",&n);
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
        }
        else if(n%3==0)
        {
            n=n/3;
        }
        else if(n%5==0)
        {
            n=n/5;
        }
        else
        {
            p=0;
            break;
        }
    }
    if(p==1)
    {
        printf("Ugly Number");
    }
    else
    {
        printf("Not Ugly Number");
    }
}