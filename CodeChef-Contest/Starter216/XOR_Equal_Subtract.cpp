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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }
    int ans = INT_MIN;
    for(auto [k, v] : mp)
    {
        ans = max(ans, v);
    }
    vector<int> b(32);
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k <= 31; k++)
        {
            if ((a[i] >> k) & 1)
            {
                b[k]++;
            }
        }
    }
    for (int v : b)
    {
        ans = max(ans, v);
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