#include<stdio.h>
#include<math.h>
int main()
{
    int X,Y,M,A,B;
    scanf("%d%d%d",&X,&Y,&M);
    A=pow(X,Y);
    B=A%M;
    printf("%d",B);
    
}