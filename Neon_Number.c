#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,rem,sum=0,temp;
    scanf("%d",&n);
    m=pow(n,2);
    temp=m;
    while(temp>0)
    {
        rem=temp%10;
        temp=temp/10;
        sum=sum+rem;
    }           
    m=temp;
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}