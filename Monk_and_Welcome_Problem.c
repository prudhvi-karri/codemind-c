#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int ar1[n],ar2[n],sum,arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar1[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar2[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=ar1[i]+ar2[i];
        arr[i]=sum;
        printf("%d ",arr[i]);
        sum=0;
    }

}