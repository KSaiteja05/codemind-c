#include<stdio.h>
int main()
{
    int n,max=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    int x;
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(a[i]+x>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}