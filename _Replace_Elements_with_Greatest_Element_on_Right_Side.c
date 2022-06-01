#include<stdio.h>
int main()
{
    int i,n,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int c=0,j,max=0;
    for(i=0;i<n;i++)
    {
        max=0;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>max)
            max=arr[j];
        }
        if(i==n-1)
        printf("-1");
        else
        printf("%d ",max);
    }
    
}