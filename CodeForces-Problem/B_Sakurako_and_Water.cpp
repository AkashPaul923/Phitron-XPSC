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
    vector<vector<ll>> a(n, vector<ll>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + 1 < n && j + 1 < n)
            {
                a[i + 1][j + 1] = min(a[i][j], a[i + 1][j + 1]);
            }
            if (i == n - 1 || j == n - 1)
            {
                ans += abs(min(0LL, a[i][j]));
            }
        }
    }

    cout << ans << nl;
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