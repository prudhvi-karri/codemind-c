#include<stdio.h>
int loop(int n,int i)
{
    printf("%d ",i);
    if(i<n)
    {
        i++;
        return loop(n,i);
    }
    else
    return 0;
}
int main()
{
    int n,i=1;
    scanf("%d",&n);
    if(n>=1 && n<=10000)
    loop(n,i);
    else
    printf("The Number Series is Not Possible Print");
    
}