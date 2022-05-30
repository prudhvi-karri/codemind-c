#include<stdio.h>
#include<math.h>
int is_prime(int l)
{
    if(l==1)
    return 0;
    for(int i=2;i<int(sqrt(l)+1);i++)
    {
        if(l%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int a,j,c=0;
    scanf("%d",&a);
    for(j=1;j<=a;j++)
    {
        if(is_prime(j)==1)
        {
            if(a%j==0 && is_prime(a/j)==1)
            {
                c++;
                printf("%d %d",j,a/j);
                break;
            }
        }
    }
    if(c==0)
    printf("-1");
    
}
// find two distint product primes in c
