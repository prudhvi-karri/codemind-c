#include<stdio.h>
int main()
{
    int i,n,j,c,f=0,a[100],c1=0,k=0,max;
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
        {
            c1++;
            a[k]=arr[i];
            k++;
        }
        else
        f++;
    }
    if(f==n)
    printf("-1");
    else
    {
    max=a[0];
    for(k=0;k<c1;k++)
    {
        if(a[k]>max)
        max=a[k];
    }
    printf("%d",max);
    }
}