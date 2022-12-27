#include <bits/stdc++.h>

using namespace std;

int LCM(int a, int b)
{
    int mn = min(a, b);
    for (int i = mn; i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            return i;
        }
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << LCM(a, b) << endl;
    return 0;
}