#include<stdio.h>
#include<math.h>
int perfectsqr(int num)
{
int i;
float f;
f=sqrt((double)num);
printf("\n%f",f);
i=f;
printf("\n%d" ,i);
if(i==f)
{
    return 1;
}
else
{
    return 0;
}
}
int main(){
    int num;
    scanf("%d",&num);
    if(perfectsqr(num))
    {
        printf("\nits perfect");
    }
    else{
        printf("\nnot perfect bby");
    }
    return 0;
}