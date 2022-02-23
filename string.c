#include <stdio.h>
//#include<ctype.h>
#include <string.h>

int main()
{
    int len;
    char c[10] = {'R', 'a', 'j', 'a', '\0'}, upper;

    len = strlen(c);
    printf("\nlength    :  %d", len);

    //     printf("uppercase :  %s", strupr(c));
    // printf("lowercase :  %s", strlwr(c));
    //     printf("Reverse   :  %s", strrev(c));
    printf("\n%s", c);

    return 0;
}
