#include<stdio.h>
int main()
{
    int i,n,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&k);
    int t1,t2,c=0,c1=0;
    for(i=0;i<n;i++)
    {
        if (arr[i]==k)
        {
            c=1;
            t1=i;
            break;
        }
    }
    if(c==0)
    t1=-1;
    for(i=n-1;i>=0;i--)
    {
        if (arr[i]==k)
        {
            c1=1;
            t2=i;
            break;
        }
    }
    if(c1==0)
    t2=-1;
    printf("%d %d",t1,t2);
}