#include<stdio.h>
int isrev(int n)
{
    int r,s=0;
    while(n)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    int sqn=n*n;
    int revn=isrev(n);
    int sqrevn=revn*revn;
    if(sqn==isrev(sqrevn))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}