#include<stdio.h>
#include<math.h>
int main()
{
    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        int n;
        scanf("%d",&n);
        int rt=pow(n,0.5);
        if(rt*rt==n)
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