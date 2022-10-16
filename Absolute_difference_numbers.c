#include<stdio.h>
int isrev(int n)
{
    int r,c=0;
    while(n)
    {
        r=n%10;
        c=c*10+r;
        n=n/10;
    }
    return c;
}
int main()
{
    int n,r,m,s=0,c=0,cnt1=0,cnt2=0;
    scanf("%d %d",&n,&m);
    int rev=isrev(n);
    while(rev)
    {
        if(cnt1==m)
        {
            break;
        }
        r=rev%10;
        s=s*10+r;
        rev=rev/10;
        cnt1+=1;
    }
    while(n)
    {
        if(cnt2==m)
        {
            break;
        }
        r=n%10;
        c=c*10+r;
        n=n/10;
        cnt2+=1;
    }
    if(s>isrev(c))
    {
        printf("%d",s-isrev(c));
    }
    else
    {
        printf("%d",isrev(c)-s);
    }
}