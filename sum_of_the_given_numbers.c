#include<stdio.h>
int main()
{
    int n,sum=0,i;
    scanf("%d",&n);
    int arr[n],ar1[n],ar2[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar2[i]);
         scanf("%d",&ar1[i]);
    }
    for(i=0;i<n;i++)
    {
        arr[i]=ar1[i]+ar2[i];
        printf("%d
",arr[i]);
    }
}