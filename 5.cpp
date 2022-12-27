#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int i = 0;
    int j;
    for (j = 1; j <= n; j = j + 2)
    {
        arr[i] = j;
        i++;
    }

    for (int k = j - 1; k >= 2; k = k - 2)
    {
        arr[i] = k;
        i++;
    }

    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}