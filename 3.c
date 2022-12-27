#include <stdio.h>

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            char c = 'A' + i - 1;
            printf("%c ", c);
        }
        printf("\n");
    }
    return 0;
}