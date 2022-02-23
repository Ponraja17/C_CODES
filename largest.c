#include <stdio.h>
int main() {

    int n,i,a[10],largest;
    printf("enter the length :");
    scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         printf("the elements %d   :",i+1);
         scanf("%d",&a[i]);
     }
     largest=a[0];
     for(i=1;i<n;i++)
     {
         if(largest<a[i])
         {
             largest=a[i];
         }
     }
     printf("largest is %d",largest);

    return 0;
}



