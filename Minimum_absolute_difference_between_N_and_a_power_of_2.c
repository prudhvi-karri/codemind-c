#include<stdio.h>
#include<math.h>
int main()
{
    int n,t,l,a;
    scanf("%d",&a);
    for(int i=1;i<a;i++)
    {
        t=pow(2,i);
        l=pow(2,i-1);
        //printf("%dt %dl ",t,l);
        if(t==a)
        {
            printf("0");
            return 0;
        }
        if(t>a)
        {
            //printf("%dt %dl ",t,l);
            if((t-a)>(a-l))
            {
                printf("%d",a-l);
                break;
            }
            else
            {
                printf("%d",t-a);
                break;
            }
        }
    }
}