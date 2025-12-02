#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll x = 1, mx = 0;
    for (int i = 0; i < 32; i++)
    {
        if (a & x)
            mx = x;
        x *= 2;
    }
    if (b < mx)
        cout << 3 << nl << a - mx << " " << b << " " << mx << nl;
    else if (b < 2 * mx)
        cout << 2 << nl << a - mx << " " << b - mx << nl;
    else
        cout << -1 << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}