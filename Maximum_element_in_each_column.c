#include<stdio.h>
int main()
{
    int r,c,i,j;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int max=arr[0][0];
     for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
        	
            if(arr[j][i]>max)
            {
            	max=arr[j][i];
			}
        }
        printf("%d
",max);
        max=0;
    }
    
}