#include<stdio.h>
int main()
{
    int x,y;
    float a1,a2;
    printf("enter salary: ");
    scanf("%d",&x);
    a1=(x/100)*40;
    a2=(x/100)*20;
    y=x+a1+a2;
    printf("gross salary is : %d",y);
    return 0;

}