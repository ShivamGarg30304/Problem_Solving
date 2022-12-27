#include <stdio.h>

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        char c = 'A' + i - 1;
        for (int j = 1; j <= 6 - i; j++)
        {
            printf("%c ", c);
            c = c + 1;
        }
        printf("\n");
    }
    return 0;
}