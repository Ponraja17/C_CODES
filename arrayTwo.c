#include<stdio.h>
int main()
{
    int i,j,a[100][100],b[100][100],c[100][100],n,r;
printf("\nenter the row : ");
scanf("%d",&n);
printf("\nenter the colum : ");
scanf("%d",&r);
for(i=0;i<n;i++)
{
    for(j=0;j<r;j++){

    printf("\nvalue of a[%d][%d] : ",i,j);
    scanf("%d",&a[i][j]);
    }
    
}
for(i=0;i<n;i++)
{
    for(j=0;j<r;j++){

    printf("\nvalue of b[%d][%d] : ",i,j);
    scanf("%d",&b[i][j]);
    }
    
}
for(i=0;i<n;i++)
{
    for(j=0;j<r;j++)
    {
c[i][j]=a[i][j]+b[i][j];
    printf("\t%d",c[i][j]);
    
    }
    printf("\n");
    
}
return 0;
}