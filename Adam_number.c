#include<stdio.h>
int main()
{
    int n,rem,temp,rev=0,o,m,rev1=0,rem1,y;
    scanf("%d",&n);
    m=n*n;//12*12=144
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    o=rev*rev;//21*21=441
    while(o!=0)
    {
        rem1=o%10;
        rev1=rev1*10+rem1;
        o=o/10;
    }
    
    
        if(m==rev1)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    
}