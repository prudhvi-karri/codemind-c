#include<stdio.h>
int main()
{
    int i,n,j,c,f=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(arr[i]==arr[j])
                {
                    c++;
                }
            }
        }
        if(c==1)
        printf("%d ",arr[i]);
        else
        f++;
    }
    if(f==n)
    printf("-1");
}