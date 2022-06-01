#include<stdio.h>
int main()
{
    int i,n,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int c=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<=arr[i+1])
        c+=arr[i+1]-arr[i];
    }
    printf("%d",c);
}