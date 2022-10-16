#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a==0 && b%2==0)
        {
            printf("YES");
        }
        else if(a==0 && b%2!=0)
        {
            printf("NO");
        }
        else if((a+(b*2))%2==0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
}