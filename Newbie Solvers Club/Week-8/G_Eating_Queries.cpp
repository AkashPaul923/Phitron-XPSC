#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<ll> a(n), p(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.rbegin(), a.rend());
    p[0] = a[0];
    for (int i = 1; i < n; i++)
        p[i] = p[i - 1] + a[i];
    while (q--)
    {
        ll k;
        cin >> k;
        auto idx = lower_bound(p.begin(), p.end(), k);
        if (idx == p.end())
            cout << -1 << nl;
        else
            cout << idx - p.begin() + 1 << nl;
    }
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