#include <bits/stdc++.h>

using namespace std;

int fact(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}

bool strongNumber(int n)
{
    int x = n;
    int a = 0;
    while (x != 0)
    {
        int rem = x % 10;
        a += fact(rem);
        x /= 10;
    }
    if (a == n)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (strongNumber(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}