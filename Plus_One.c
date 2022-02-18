#include<stdio.h>
int main()
{
    int n,i=0,b=0,c=0;
    scanf("%d",&n);
    int arr[n],ar[n],d[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        b=b*10+arr[i];//1 0
    }
    b++;
        i=0;
	    while(b>0)
	    {
	        ar[i]=b%10;
	        b=b/10;  
	        d[i]=ar[i];
	        i++;
	        c++; 
	    }
	   for(i=c-1;i>=0;i--)
	    {
	    printf("%d ",d[i]);
		}
  
}