#include<stdio.h>
int main()
{
    int n,arr[n],i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)// 2 3 5 6 
    {
        scanf("%d",&arr[i]);//
    }
    for(i=0;i<n;i++)
    {
    	sum=sum+arr[i];
    	arr[i]++;
	}
    printf("%d",sum);
}