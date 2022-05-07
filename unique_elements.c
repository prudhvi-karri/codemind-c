#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {scanf("%d",&arr[i]);
        //printf("%d ",arr[i]);
    }
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
        if(c>=1 && arr[i]!=-1)
        printf("%d ",arr[i]);
    }
}