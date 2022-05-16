#include<stdio.h>
int main()
{
    int i,n;
    char s[1000],l;
    scanf("%[^
]s",s);
    scanf(" %c",&l);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==l)
        {
            printf("True
%d",i);
            return 0;
        }
    }
    printf("False");
}