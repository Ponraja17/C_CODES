#include <stdio.h>
int main()
{
    int number;
    
    for (int i = 1; i <= 5; i++)
    {
        printf("\nenter the number");
    scanf("%d", &number);

        if (number % 2 == 0 && number != 0)
        {
            printf("even dude");
        }

        else if (number == 0)
        {
            printf("its 0 bro");
        }

        else
        {
            printf("number is odd");
        }
    }
    return 0;
}