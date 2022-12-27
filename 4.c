#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        char c = 'A' + i - 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", c);
            c = c + 1;
        }
        printf("\n");
    }
    return 0;
}