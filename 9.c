#include <stdio.h>

int main()
{
    int n = 8;
    // scanf("%d", &n);
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        if (i <= n)
        {
            for (int j = n - i; j >= 1; j--)
            {
                printf("  ");
            }
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else
        {
            for (int j = 1; j <= i - n; j++)
            {
                printf("  ");
            }
            for (int j = 2 * (i - n); j < 2 * n - 1; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}