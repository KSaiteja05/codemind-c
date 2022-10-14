#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u' or ch=='A' or ch=='E' or ch=='I' or ch=='O' or ch=='U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}