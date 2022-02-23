#include <stdio.h>
int main()
{
    char c;
    printf("\nenter the letter");
    scanf("%c", &c);
    switch(c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%cits vowel",c);
        break;
    default:

        printf("its not vowel");
        break;
    }

    return 0;
}