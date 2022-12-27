#include <bits/stdc++.h>

using namespace std;

int POW(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    return a * POW(a, b - 1);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << POW(a, b) << endl;
    return 0;
}