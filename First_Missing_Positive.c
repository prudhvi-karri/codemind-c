#include<stdio.h>
int main()
{
    int i,n,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int max=0,c=0,j;
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    //printf("%d",max);
    for(j=1;j<=max+1;j++)
    {
        //printf("%dj ",j);
        for(i=0;i<n;i++)
        {
            //printf("%da ",arr[i]);
            c=0;
            if (arr[i]==j)
            {
                c=1;
                break;
            }
        }
        //printf("  %dcc  ",c);
        if(c==0)
        {
            printf("%d",j);
            break;
        }
    }
}