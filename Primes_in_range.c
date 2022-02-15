#include<stdio.h>
int main()
{
    int m,n,count=0,i,y,c1=0;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
    	if(i!=1)
    	{
	    		for(y=2;y*y<=i;y++)
	        	{    
		            if(i%y==0)
		            {
		                count=1;
		                break;
		            }
	            }
	            if(count==0)
	            c1++;
	            count=0;
	            
		}
        
    }
    printf("%d",c1);
}