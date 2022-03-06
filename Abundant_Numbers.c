#include<stdio.h>
int main()
{
    int n,sum=0,i,k=0,arr[100],c=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
            arr[k]=i;
            k++;
        }
    }
    for(k=0;k<c;k++)
    {
        sum=sum+arr[k];
    }
    if(sum>n)
    printf("True");
    else
    printf("False");
    
}