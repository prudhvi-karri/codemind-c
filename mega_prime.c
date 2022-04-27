#include<stdio.h>
int if_prime(int n)
{
    int c=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
    return 1;
    else
    return 0;
}
int main()
{
    int i,n,c=0,c1=0,c2=0,t,rem;
    scanf("%d",&n);
    if(if_prime(n)==1)
    {
        t=n;
        while(n!=0)
        {
            rem=n%10;
            c1++;
            if(if_prime(rem)==1)
            c2++;
            n=n/10;
        }
        if(c1==c2)
        printf("Mega Prime");
        else
        printf("Not Mega Prime");
    }
    else
    printf("Not Mega Prime");
}