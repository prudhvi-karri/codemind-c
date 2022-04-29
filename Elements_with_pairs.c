#include<stdio.h>
int main()
{
    int i,n,m,c,j,s=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {scanf("%d",&arr[i]);
        printf("%d ",arr[i]);
    }
    if(n%2!=0)
    printf("0");
}