#include<stdio.h>
int is_self(int i)
{
    int rem,s=0,c=0,temp;
    if(i<=9)
    return 1;
    else
    {
        temp=i;
        c=0;
        s=0;
        while(i>0)
        {
            rem=i%10;
            c++;
            if(rem!=0)
            {
                if(temp%rem==0)
                s++;
            }
            i=i/10;
        }
        if(c==s)
        return 1;
        else
        return 0;
    }
}
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(is_self(i)==1)
        printf("%d ",i);
    }
}