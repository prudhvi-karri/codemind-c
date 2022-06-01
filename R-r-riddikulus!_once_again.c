#include<stdio.h>
int main()
{
    int i,n,k;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=k;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<k;i++)
    printf("%d ",arr[i]);
}