#include<stdio.h>
#include<string.h>
int main()
{
    int j,i;
  char a="hello",b[100];
   j=strlen(a)-1;
   printf("%d",j);
   for(i=0;i<j-1;i++)
   {
scanf("%s",b[i]);
   }
   for(i=j;i<0;i--){
   printf("%c",b[i]);
   }
   return 0;
}