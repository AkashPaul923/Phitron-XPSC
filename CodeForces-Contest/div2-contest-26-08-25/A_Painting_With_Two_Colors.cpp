#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, a, b;
        cin >> n >> a >> b;
        if (a <= b)
        {
            if ((n % 2 == 0 && b % 2 == 0) || (n % 2 != 0 && b % 2 != 0))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
            if ((n % 2 == 0 && a % 2 == 0 && b % 2 == 0) || (n % 2 != 0 && a % 2 != 0 && b % 2 != 0))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}