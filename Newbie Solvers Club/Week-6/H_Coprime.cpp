#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'

void solve()
{
    int n, m = 1000;
    cin >> n;
    vector<int> v(m + 1, -1);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v[x] = i;
    }
    int ans = -1;
    for (int i = 1; i <= m; i++)
    {
        if (v[i] == -1)
            continue;
        for (int j = 1; j <= m; j++)
        {
            if (v[j] == -1)
                continue;
            if (__gcd(i, j) == 1)
            {
                ans = max(ans, v[i] + v[j]);
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