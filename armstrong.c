#include <stdio.h>
int main()
{
    int n, a, b, c, d, e;
    printf("\nenter the number");
    scanf("%d", &n);
    a = n % 10; //3
    b = n / 10; //12
    c = b % 10; //2
    d = b / 10; //1
    printf("\n%d  %d  %d", d, c, a);
    e = (d * d * d) + (c * c * c) + (a * a * a);
    if (n == e)
    {
        printf("\n%d is armstrong number", n);
    }
    else
    {
        printf("\nits not a armstrong number");
    }

    return 0;
}