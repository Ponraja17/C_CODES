#include<stdio.h>
#include<string.h>
 int main()
 {
     char a[100],temp;
     int i=0,j;
     scanf("%s",a);
     j=strlen(a)-1;
     while(i<j)
     {
         temp=a[j];
         a[j]=a[i];
        a[i]=temp;
         i++;
         j--;

     }
     printf("%s",a);
     return 0;
 }