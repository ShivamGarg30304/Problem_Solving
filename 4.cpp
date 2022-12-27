#include <iostream>

using namespace std;

void perfectnumber(int x, int y)
{
    int k, sum, j;
    for (k = x; k <= y; k++)
    {
        sum = 0;
        for (j = 1; j <= k / 2; j++)
        {
            if (k % j == 0)
            {
                sum += j;
            }
        }
        if (sum == k)
        {
            cout << k << endl;
        }
    }
}

int main()
{
    int m, n;
    cout << "Enter the range" << endl;
    cin >> m >> n;
    perfectnumber(m, n);
    return 0;
}