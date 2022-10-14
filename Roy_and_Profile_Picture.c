#include<stdio.h>
int main()
{
    int l,n;
    scanf("%d",&l);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int w,h;
        scanf("%d",&w);
        scanf("%d",&h);
        if(w<l or h<l)
        {
            printf("UPLOAD ANOTHER
");
        }
        else
        {
            if(w==h)
            {
                printf("ACCEPTED
");
            }
            else
            {
                printf("CROP IT
");
            }
        }
    }
}