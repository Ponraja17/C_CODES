#include<stdio.h>
int main()
{
    int a,i,b,c,temp=0;
    scanf("%d",&a);
    c=a;
    while(a!=0)
    {
        b=a%10;
        temp=temp*10+b;
       a/=10;

    }
    printf("%d reverse",temp);
    if(temp==c)
    {
        printf("%d its polindrome",a);
    }
    else{
        printf("%d its not polindrome",a);
    }
    return 0;

}