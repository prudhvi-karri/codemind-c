#include<stdio.h>
int main()
{
    int i,n,m,c,j;
    scanf("%d",&n);
    int arr[n],s=0;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                arr[j]=-1;
            }
        }
        if(arr[i]!=-1 && arr[i]%2!=0)
        s=s+arr[i];
    }printf("%d",s);
}