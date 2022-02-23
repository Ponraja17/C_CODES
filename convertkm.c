#include<stdio.h>
int main()
{
float x,m,f,i,c;
printf("enter the km: ");
scanf("%f", &x);
m=x*1000;
f=x*3280.84f;
i=x*39370.079f;
c=x*100000;
printf("\nkm is :%f",x);
printf("\nin feet :%f",f);
printf("\nin meter :%f",m);
printf("\nin inches: %f",i);
printf("\nin cemtemeter :%f",c);
return 0;
}