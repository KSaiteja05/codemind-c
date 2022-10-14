#include<stdio.h>
int main()
{
    int a,p=1;
    scanf("%d",&a);
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            p=0;
            break;
        }
    }
    if(p==1)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}