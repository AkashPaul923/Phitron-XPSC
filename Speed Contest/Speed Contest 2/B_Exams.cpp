#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, z;
        cin >> x >> y >> z;
        if (z > (x * y) / 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}