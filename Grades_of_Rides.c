#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>50 && b>60 && c>100)
    {
        printf("10");
    }
    else if(a>50 && b>60)
    {
        printf("9");
    }
    else if(c>100 && b>60)
    {
        printf("8");
    }
    else if(a>50 && c>100)
    {
        printf("7");
    }
    else if(a>50 || b>60 || c>100)
    {
        printf("6");
    }
    else 
    {
        printf("5");
    }
}