#include <bits/stdc++.h>

using namespace std;

void palindrome(int n)
{
    int temp = n;
    int num = 0;
    while (temp > 0)
    {
        int r = temp % 10;
        num = num * 10 + r;
        temp = temp / 10;
    }
    if (n == num)
    {
        cout << n << " is a palindrome number" << endl;
    }
    else
    {
        cout << n << " is not a palindrome number" << endl;
    }
}

int recursive_palindrome(int x, int y, int z)
{
    if (y == 0)
    {
        if (x == z)
        {
            cout << "palindrome" << endl;
        }
        else
        {
            cout << "not palindrome" << endl;
        }
    }
    else
    {
        recursive_palindrome(x * 10 + y % 10, y / 10, z);
    }
}
int main()
{
    recursive_palindrome(0, 123, 123);
    return 0;
}