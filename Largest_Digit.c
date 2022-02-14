#include<stdio.h>
int main()
{
    int n,temp,rem,large=0;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        if(large<rem)
        {
            large=rem;
        }
        temp=temp/10;
    }
    printf("%d",large);
}