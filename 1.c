#include <stdio.h>

int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j <= 2 * (i + 1) - 1; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}