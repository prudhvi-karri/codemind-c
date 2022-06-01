#include<stdio.h>
int main()
{
    int i,n,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&k);
    int t1,c=0;
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
    printf("%d ",t1);
}