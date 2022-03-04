#include<stdio.h>
int main()
{
    int n;
    float m,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        m=i*1.0;
		sum=sum+(1/m);
    }
    printf("%.2f",sum);
    return 0;
}