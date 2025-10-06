#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (abs(a - b) < 2)
    {
        cout << a + b;
    }
    else
    {
        cout << (2 * ((a > b) ? a : b)) - 1;
    }

    return 0;
}