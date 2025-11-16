#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        cout << (2 * (n - 1)) + (min(x - 1, y - 1)) + (min(n - x, y - 1)) + (min(x - 1, n - y)) + (min(n - x, n - y)) << endl;
    }

    return 0;
}