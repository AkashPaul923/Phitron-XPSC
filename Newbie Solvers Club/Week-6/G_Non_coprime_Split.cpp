#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    ll l, r;
    cin >> l >> r;
    for (ll i = l; i <= r; i++)
    {
        for (ll j = 2; j * j <= i; j++)
        {
            if (__gcd(i, j) != 1)
            {
                cout << i - j << " " << j << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}