#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,n;
    scanf("%[^
]s",&str);
    n=strlen(str);
    for(i=n-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}