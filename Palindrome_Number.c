#include<stdio.h>
int ispalin(int n)
{
    int r,s=0,x=n;
    while(n)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(s==x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    for(int j=0;j<a;j++)
    {
        int n;
        scanf("%d",&n);
        if(ispalin(n)==1)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    
}