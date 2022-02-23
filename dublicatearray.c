#include<stdio.h>
int main()
{
    int a[100],i,l,j;
  printf("length of the array :");
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<l;i++)
    {
for(j=i+1;j<l;j++)
{
    if(a[i]==a[j])
    {
        printf("%d  ",a[i]);
    }
}
 
    }
    
    return 0;
}