#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float s=(a+b+c)/2.0;
    int area=s*(s-a)*(s-b)*(s-c);
    float sq=pow(area,0.5);
    printf("%.2f",sq);
}