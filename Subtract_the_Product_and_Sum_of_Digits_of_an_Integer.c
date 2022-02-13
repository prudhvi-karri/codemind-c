#include<stdio.h>
int main()
{
    int n,sum=0,mul=1,temp,rem,a;
    scanf("%d",&n);
    temp=n;
    while(temp)
    {
        rem=temp%10;
        temp=temp/10;
        sum=sum+rem;
        mul=mul*rem;
    }
    a=mul-sum;
    printf("%d",a);
}