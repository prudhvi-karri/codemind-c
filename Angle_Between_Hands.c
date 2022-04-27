#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=0,a[2],b[2],i,j,k=0,m=0;
    float c;
    char str[100];
    scanf("%[^
]s",str);
    for(i=0;i<2;i++)
    {
        a[i]=str[i]-48;
        n=(n*10)+a[i];
    }
    //printf("%d ",n);
    for(j=3;j<5;j++)
    {
        b[k]=str[j]-48;
        m=(m*10)+b[k];
        k++;
    }
    //printf("%d ",m);
    float ans=abs((30*n)-((11/2.0)*m));
    float d=(360-(ans));
    //printf("%.1f %.1f ",d,ans);
    if(d<ans)
    {
         printf("%.1f ",d);
     }
    else
    {printf("%.1f ",abs(ans));}
}