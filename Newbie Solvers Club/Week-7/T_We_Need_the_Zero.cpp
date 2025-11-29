#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll ans = a[0];
    for (int i = 1; i < n; i++)
        ans ^= a[i];
    if (n % 2)
    {
        cout << ans << nl;
        return;
    }
    if (ans == 0)
    {
        cout << 3 << nl;
        return;
    }
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