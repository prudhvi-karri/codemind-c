#include<stdio.h>
#include<math.h>
int is_pali(int l)
{
    int r,rev=0,t=l;
    while(l!=0)
    {
        r=l%10;
        rev=rev*10+r;
        l/=10;
    }
    if(t==rev)
    return 1;
    else
    return 0;
}
int main()
{
    int a,i,j,t1,t2;
    scanf("%d",&a);
    i=1;
    j=-1;
    while(a)
    {
        if(is_pali(a+i)==1)
        {
            t1=a+i;
            break;
        }
        i++;
    }
    while(a)
    {
        if(is_pali(a+j)==1)
        {
            t2=a+j;
            break;
        }
        j--;
    }
    //printf("%d %d",t1,t2);
    if(t1-a==a-t2)
    printf("%d %d",t2,t1);
    else if(t1-a>a-t2)
    printf("%d",t2);
    else
    printf("%d",t1);
}