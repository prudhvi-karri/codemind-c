#include<stdio.h>
int main()
{
    int n,i,rem,sum=0,temp,mul=1;
    scanf("%d",&n);
    temp=n;
    while(temp)
    {
        rem=temp%10;
        temp=temp/10;
        sum=sum+rem;
        mul=mul*rem;
    }
    n=temp;
    if(sum==mul)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}