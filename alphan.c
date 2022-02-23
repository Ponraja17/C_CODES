#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char s[100];
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            for(j=0;j<s[i]-48;j++)
            {
                printf("%c",s[i-1]);
            }

        }
    }
    return 0;
}