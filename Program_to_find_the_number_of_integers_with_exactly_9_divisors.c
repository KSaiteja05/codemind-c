#include<stdio.h>
int isnine(int n)
{
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cnt++;
        }
    }
    if(cnt==9) return 1;
    else return 0;
}
int main()
{
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(isnine(i)==1)
        {
            printf("%d",i);
            printf(" ");
            cnt++;
        }
    }
    printf("
Total=%d",cnt);
}