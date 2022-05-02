#include<stdio.h>
int main()
{
    int i,n,m,arr[100],k=0,c=0,rem,s=0,f=0,j;
    int k1=0,c1=0,ar1[100],r1;
    scanf("%d%d",&n,&m);
    int rev=0;
    while(n)
    {
        rem=n%m;
        //printf("%d ",rem);
        c++;
        arr[k]=rem;
        k++;
        n=n/m;
    }
   
    for(k=c-1;k>=0;k--)
    {
        rev=(rev*10)+arr[k];
    }
    while(rev)
    {
        r1=rev%10;
        c1++;
        ar1[k1]=r1;
        k1++;
        rev=rev/10;
    }
    for(k1=0;k1<c1;k1++)
    {
        s=0;
        if(ar1[k1]==0)//0 0 1 0 0 0 1
        {
            s++;
        }
    
        else
        continue;
        
        for(j=k1+1;j<c1;j++)//0 0 1 0 0 0 1
        {
            if(ar1[j]==0)
            {
                s++;
            }
            else
            {
                break;
            }
           // printf("%d
",l);
        }
        //printf("%d
",l);
        if(f<s)
        f=s;
     
    }
    if(f>0)
    printf("%d",f);
    else
    printf("-1");
}