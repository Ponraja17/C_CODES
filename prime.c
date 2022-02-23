#include<stdio.h>
int main()
{
    int a,i,m,b=0;
    scanf("%d",&a);
    m=a/2;
    if(a==1)
    {
        printf("its not prime neither prime");
       b=1;
    
    }
    else if(a==0){
        printf("its 0 bro");
       b=1;
    }
    else{
    for(i=2;i<=m;i++)
{
    if(a%i==0)
    {
        printf("not prime");
       b=1;
        break;
    }
}
    }
if(b==0)
{
    printf("its prime");
}
return 0;
}