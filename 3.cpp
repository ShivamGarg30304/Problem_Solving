#include <iostream>

using namespace std;

int fact(int x, int y)
{
    if (y == 1)
    {
        return x;
    }
    else
    {
        return fact(x * y, y - 1);
    }
}

int main()
{
    cout << fact(1, 7) << endl;
    return 0;
}