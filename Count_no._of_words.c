#include<stdio.h>
int main()
{
    char str[100];
    int n,i,count=0;
    scanf("%[^
]s",&str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        {
            count++;
        }
    }
    count=count+1;
    printf("%d",count);
}