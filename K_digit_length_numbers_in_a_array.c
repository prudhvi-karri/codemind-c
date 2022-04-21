#include<stdio.h>
int main()
{
    int n,i,k,temp,c1=0,rem,c2=0;
    scanf("%d%d",&n,&k);
    int arr[n],a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        //printf("%d ",arr[i]);
    }
    //printf("
");
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        while(temp!=0)
        {
            rem=temp%10;
            c1++;
            temp=temp/10;
        }
        if(arr[i]==0)
        c1++;
        a[i]=c1;
        //printf("%d ",a[i]);
        c1=0;
    }
    //printf("
");
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        c2++;
    }
    printf("%d",c2);
}