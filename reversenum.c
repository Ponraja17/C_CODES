#include<stdio.h>
int main()
{
    int n,i,r,temp=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        temp=temp*10+r;
        n/=10;
    }
    printf("%d",temp);
}