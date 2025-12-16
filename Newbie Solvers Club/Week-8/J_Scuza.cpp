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
    vector<ll> a(n + 1, 0), b(n + 1, 0), p(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        p[i] = a[i] + p[i - 1];
        b[i] = max(a[i], b[i - 1]);
    }
    while (q--)
    {
        ll k;
        cin >> k;
        int r = upper_bound(b.begin() + 1, b.end(), k) - b.begin();
        cout << p[r - 1] << " ";
    }
    cout << nl;
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