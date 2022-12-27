#include <bits/stdc++.h>

using namespace std;

void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }

        for (int j = 1; j <= 2 * i - 3; j++)
        {
            cout << "  ";
        }
        if (i == 1)
        {
            for (int j = n - 1; j >= 1; j--)
            {
                cout << j << " ";
            }
        }
        else
        {
            for (int j = n - i + 1; j >= 1; j--)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printPattern(n);
    return 0;
}