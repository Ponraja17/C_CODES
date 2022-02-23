#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5, sum , avg;

    printf("\nenter the marks:");
    scanf("\n%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    sum = m1 + m2 + m3 + m4 + m5;

    printf("sum%d",sum);
    avg = sum/5;
    printf("\navg is%d",avg);
if(m1>=35&&m2>=35&&m3>=35&&m4>=35&&m5>=35)
{
    printf("\npass");
     if (avg >= 90&&avg>=100)
        {
            printf("\ngrade A");
        }
        else if (avg <= 80)
        {
            printf("\ngrade B");
        }
       else if(avg <= 70)
        {
            printf("\ngrade C");
        }
        else{
            printf("\ngrade D");
        }
 
}
else{
    printf("\nfail");
}
   
       
       
    return 0;
}