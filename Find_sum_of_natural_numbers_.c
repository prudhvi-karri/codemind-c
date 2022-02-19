#include<stdio.h>
int fun(int n)
{
   if(n==0)
   {
       return n;
   }
   return n+fun(n-1);
    
}
int main()
{
    int n;
    scanf("%d",&n);
    n=fun(n);
    printf("%d",n);
}