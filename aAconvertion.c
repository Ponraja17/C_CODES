#include<stdio.h>
 int main()
 {
     int i;
    char letter;
    printf("\ntype yours ");
    scanf("%c",&letter);
    printf("\npress 1 to change in caps");
    scanf("%d",&i);
    if(i==1)
    {

    
    printf("%c",letter-32);
    }
    else
    {
        printf("para is %c",letter);
    }
return 0;
 }