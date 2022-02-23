#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a!=0&&b!=0)
    {
        a=a+b;
        b=a-b;
        a=a-b;
        printf("\naftr swap \n%d\n%d ",a,b);
    }
    return 0;
}