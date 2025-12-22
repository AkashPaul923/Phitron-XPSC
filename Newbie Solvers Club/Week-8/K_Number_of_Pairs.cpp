#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        auto start = a.begin() + i + 1, end = a.end();
        x += upper_bound(start, end, r - a[i]) - start;
        y += upper_bound(start, end, (l - 1) - a[i]) - start;
    }
    cout << x - y << nl;
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