#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sq=sqrt(n);
    if(sq*sq==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}