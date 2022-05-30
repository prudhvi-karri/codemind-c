#include<stdio.h>
#include<math.h>
int is_pali(int l)
{
    int r,rev=0,t=l;
    while(l!=0)
    {
        r=l%10;
        rev=rev*10+r;
        l/=10;
    }
    if(t==rev)
    return 1;
    else
    return 0;
}
int is_prime(int l)
{
    if(l==1)
    return 0;
    for(int j=2;j<int(sqrt(l)+1);j++)
    {
        if(l%j==0)
        return 0;
    }
    return 1;
}
int main()
{
    int a,i,j,t1,t2;
    scanf("%d",&a);
    i=1;
    while(a)
    {
        if(is_prime(a+i)==1)
        {
            if(is_pali(a+i)==1)
            {
                t1=a+i;
                break;
            }
        }
        i++;
    }
    printf("%d",t1);
}