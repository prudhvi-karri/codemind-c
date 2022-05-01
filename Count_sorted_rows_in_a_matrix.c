#include<stdio.h>
int main()
{
    int i,p,arr[100][100],j,s1=0,s2=0,f=0,c,r;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    
   for(i=0;i<r;i++)
    {
        f=0;
        s2=0;
        for(j=0;j<c-1;j++)
        {
            if(arr[i][j]<arr[i][j+1])
            f++;
            else
            s2++;
        }
        if(f==c-1 || s2==c-1)
        s1++;
    }
    printf("%d",s1);
}