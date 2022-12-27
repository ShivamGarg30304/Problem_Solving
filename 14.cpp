#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    int n;
    // scanf("%d", &n);
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else
        {
            for (int j = 1; j <= n - i; j++)
            {
                printf("  ");
            }
            printf("* ");
            printf("\n");
        }
    }

    return 0;
}