#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int c=0,j,a[100],k=0,max=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        c+=1;
        else
        {
            a[k++]=c;
            c=0;
        }
    }
    a[k++]=c;
    for(i=0;i<k;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("%d",max);
    
}