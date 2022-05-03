#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,c=0,i,j,c1=0,t1,t2,m1,m2,k=0,m=0;
        scanf("%d",&n);
        for(j=1;j<n;j++)
        {
            c=0;
            for(i=2;i<n+k;i++)
            {
                if((n+k)%i==0)
                c++;
            }
            if(c==0)
            {
                //printf("%dt1
",n+j);
                t1=n+k;
                break;
            }
            k++;
        }
        //
        for(j=1;j<n;j++)
        {
            c=0;
            for(i=2;i<n-m;i++)
            {
                if((n-m)%i==0)
                c++;
            }
            if(c==0)
            {
                t2=n-m;
                //printf("%dt2
",n-j);
                break;
            }
            m++;
        }
        m1=(n-t2);
        m2=(t1-n);
        //printf("%d %d
",m1,m2);
        if(m1>m2)
        printf("%d
",t1);
        else
        printf("%d
",t2);
        
    }
}