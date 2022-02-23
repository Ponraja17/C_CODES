#include <stdio.h>
int main()
{
    float p, r, t, si;
    printf("principle amt : ");
    scanf("%f", &p);
    printf("\nrate of intrest in precentage: ");
    scanf("%f", &r);
    printf("\ntime period in months :");
    scanf("%f", &t);
    r /= 100;
    t /= 12;
    si = p * r * t;
    printf("simple intrest is %f", si);
    return 0;
}