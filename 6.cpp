#include <bits/stdc++.h>

using namespace std;

bool isAmstrong(int n)
{
    int x = n;
    int ans = 0;
    while (x != 0)
    {
        int rem = x % 10;
        ans += rem * rem * rem;
        x /= 10;
    }
    if (ans == n)
    {
        return true;
    }
    return false;
}

int main()
{
    int a, b;
    cout << "Enter the range : " << endl;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (isAmstrong(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}