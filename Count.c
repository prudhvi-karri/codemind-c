#include<stdio.h>
int main()
{
    int n,i,c=0,v=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            c++;
        }
        if(arr[i]%2==1)
        {
            v++;
        }
    }
    printf("%d %d",c,v);
}