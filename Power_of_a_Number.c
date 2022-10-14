#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int x=pow(a,b);
    x=x%c;
    printf("%d",x);
}