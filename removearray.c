#include<stdio.h>
int main()
{
    int i,p;
    int a[5]={1,2,3,4,5};
    printf("\ndelete array position : ");
    scanf("%d",&p);
    if(p<=5)
    {

    
    for(i=p-1;i<5;i++)
    {
        a[i]=a[i+1];
    }
        for(i=0;i<4;i++)
        {
            printf("\n%d",a[i]);
        }
    
    }
    else{
        printf("not in limit");
    }
    return 0;
}