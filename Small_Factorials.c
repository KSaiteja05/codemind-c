#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int m,p=1;
        scanf("%d",&m);
        for(int j=1;j<=m;j++)
        {
            p*=j;
        }
        printf("%d
",p);
    }
}