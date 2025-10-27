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
        z = z * 24 * 60;
        if (x * y <= z)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}