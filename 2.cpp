#include <bits/stdc++.h>

using namespace std;

float mean(int a[], int n)
{
    float sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += a[i];
    }
    return (sum / n);
}

int median(int a[], int n)
{
    return a[2];
}

int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 5);
    cout << "The mean of the numbers is " << mean(a, 5) << endl;
    cout << "The median of the numbers is " << median(a, 5) << endl;
    return 0;
}