#include<stdio.h>
int main()
{
    int i,n,c=0,j,s=0,f=0;
    float sum=0;
    scanf("%d",&n);
    int arr[n];
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
        if(c==arr[i])
        {
            s++;
            sum=sum+arr[i];
        }
        else
        f++;
    }
    if(f==n)
    printf("-1");
    else
    printf("%.2f",sum/s);
}