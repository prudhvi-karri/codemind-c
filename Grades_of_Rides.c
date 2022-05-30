#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>50)
    a=1;
    if(b>60)
    b=1;
    if(c>100)
    c=1;
    if(a==b==c==1)
    printf("10");
    else if(a==1 && b==1)
    printf("9");
    else if(b==1 && c==1)
    printf("8");
    else if(a==1 && c==1)
    printf("7");
    else if(a==1 || b==1 || c==1)
    printf("6");
    else
    printf("5");
}