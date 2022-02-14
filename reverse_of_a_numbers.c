#include<stdio.h>
int main()
{
    int n,rem1,o,rev1=0;
    scanf("%d",&n);
    while(n!=0)
    {
        rem1=n%10;
        rev1=rev1*10+rem1;
        n=n/10;
    }
    printf("%d",rev1);

}