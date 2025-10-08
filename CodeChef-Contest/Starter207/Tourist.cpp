#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, mn = INT_MAX;
        cin >> n >> a >> b;
        while (n--)
        {
            int x, y;
            cin >> x >> y;
            int d = abs(a - x) + abs(b - y);
            mn = min(mn, d);
        }
        cout << mn << endl;
    }

    return 0;
}