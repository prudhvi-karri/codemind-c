#include<stdio.h>
#include<math.h>
int main()
{
    long int n,i,rem,sum=0,c=0,k=0,arr[1000],r;
    scanf("%ld",&n);
    i=0;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem*(pow(8,i));
        i++;
        n=n/10;
    }
    while(sum!=0)
    {
        r=sum%2;//7
        c++;//1
        arr[k]=r;//1
        k++;
        sum=sum/2;
    }
    for(k=c-1;k>=0;k--)
    printf("%ld",arr[k]);
}