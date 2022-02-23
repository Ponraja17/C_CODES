#include<stdio.h>
int main()
{
    int m,n,a[100],b[100],i,j,temp[100],k;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    i=0;
    j=0;
    k=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
        temp[k++]=a[i];
        i++;
        }
        else
        {
            temp[k++]=b[j];
            j++;
        }
    }
while(i<m)
{
    temp[k++]=a[i];
    i++;
}
while(j<n)
{
    temp[k++]=b[j];
    j++;
}


  
    for(i=0;i<m+n;i++)
{
    printf("%d",temp[i]);
}

    return 0;
}