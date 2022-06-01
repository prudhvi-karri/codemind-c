#include<stdio.h>
int hcf(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
        a=a-b;
        else
        b=b-a;
    }
    return a;
}
int main()
{
    int i,n,v;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    v=arr[0];
    for(i=1;i<n;i++)
    {
        v=hcf(v,arr[i]);
    }
    printf("%d",v);
}