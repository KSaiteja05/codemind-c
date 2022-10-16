#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,len=0;
    scanf("%d",&n);
    int m=n,q=n;
    while(n)
    {
        r=n%10;
        len+=1;
        n=n/10;
    }
    int s=0;
    r=0;
    while(m)
    {
        r=m%10;
        s=s+pow(r,len);
        m=m/10;
        len--;
    }
    if(q==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}