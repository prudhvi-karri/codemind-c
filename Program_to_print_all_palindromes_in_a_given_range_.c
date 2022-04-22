#include<stdio.h>
int gali(int i)
{
    int rev=0,rem,k;
    k=i;
    while(i!=0)
    {
        rem=i%10;
        rev=(rev*10)+rem;
        i=i/10;
    }
    if(rev==k)
    return 1;
    else
    return 0;
}
int main()
{
    int n,m,i,v;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(gali(i)==1)
        printf("%d ",i);
    }
}