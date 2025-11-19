#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'

void solve()
{
    ll l, r;
    cin >> l >> r;
    if (l * 2 <= r)
        cout << l << " " << l * 2 << nl;
    else
        cout << -1 << " " << -1 << nl;
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