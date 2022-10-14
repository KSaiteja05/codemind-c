#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int max,g=0;
    if(a>b)
    {
        max=a;
    }
    else
    {
        max=b;
    }
    for(int i=1;i<max;i++)
    {
        if(a%i==0 && b%i==0)
        {
            g=i;
        }
    }
    printf("%d",g);
}