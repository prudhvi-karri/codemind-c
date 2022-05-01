#include<stdio.h>
int main()
{
    int i,r,c,j,sum=0;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=1;i<r-1;i++)
    {
        for(j=1;j<c-1;j++)
        {
            sum=sum+arr[i][j];
        }
    }
    printf("%d",sum);
}