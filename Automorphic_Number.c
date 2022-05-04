#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,c=0,r,temp;
    scanf("%d",&n);
    temp=n;
    m=n*n;
    //printf("%d
",m);
    while(n)
    {
        r=n%10;
        c+=1;
        n=n/10;
    }
    r=0;
    int a[100],k=0,i;
    while(m)
    {
        r=m%10;
        a[k]=r;
        //printf("%d ",a[k]);
        k++;
        m=m/10;
    }
    //printf("%d",c)
    r=0;
    for(i=0;i<c;i++)
    {
        r=r*10+a[i];
    }
    int r1=0,rem;
    //printf("%d ",r);
    while(r)
    {
    	rem=r%10;
		r1=r1*10+rem;
		r=r/10;
	}
    if(r1==temp)
    printf("Automorphic Number");
    else
    printf("Not an Automorphic Number");
}
