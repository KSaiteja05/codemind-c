#include<stdio.h>
int main()
{
    int a,b,i=1;
    scanf("%d %d",&a,&b);
    while(a!=0)
    {
        if(i%a==0 and i%b==0)
        {
            printf("%d",i);
            break;
        }
        i+=1;
    }
}