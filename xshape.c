#include <stdio.h>
int main()
{
    int i, j, n, m;
    scanf("%d", &n);
    m = (n / 2) + 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == j)
            {
                if (i < m)
                {
                    printf("%d", (n - i) + 1);
                }
                else
                {
                    printf("%d", i);
                }
            }
            else if (i + j == n + 1)
            {
                if (i < m)
                {
                    printf("%d", i);
                }
                else
                {
                    printf("%d", j);
                }
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}