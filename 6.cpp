#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i <= n - 2; i = i + 2)
    {
        swap(arr[i], arr[i + 1]);
    }

    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}