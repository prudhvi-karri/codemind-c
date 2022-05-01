#include<stdio.h>
void third(int *arr,int n,int *top)
{
    int j;
    for(j=0;j<n;j++)
    {
        if(*top==-1 || arr[*top]!=arr[j])
        {
            *top+=1;
            arr[*top]=arr[j];
        }
    }
}
int main()
{
    int i,n,top=-1,j,temp;
    scanf("%d",&n);
    int arr[n],a[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++)
    {
    	for(j=0;j<n-i-1;j++)
    	{
    		if(arr[j+1]<arr[j])
	 		{
	 			temp=arr[j+1];
	 			arr[j+1]=arr[j];
	 			arr[j]=temp;
	 			
			 }
		}
	}
    third(arr,n,&top);
    //for(i=0;i<=top;i++)
    //printf("%d ",arr[i]);
    if(top+1>=3)
    printf("%d",arr[top-2]);
    else
    printf("It is not possible");
    
}