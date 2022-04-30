#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int i,n,k,r,rem,r1,rev=0,l,r2=0,r3;
    scanf("%d%d",&n,&k);
    //while(n!=0)
    l=(pow(10,k));
    r=n%l;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    r1=rev%l;
    //printf("%d ",r1);
    while(r1!=0)
    {
        r3=r1%10;
        r2=r2*10+r3;
        r1=r1/10;
    }
    printf("%d",abs(r-r2));
}