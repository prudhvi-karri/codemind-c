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
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                
            }
        }
        if(c==arr[i])
        {
            s++;
            arr[i]=-1;
        }

    }
    printf("%d",s);
}