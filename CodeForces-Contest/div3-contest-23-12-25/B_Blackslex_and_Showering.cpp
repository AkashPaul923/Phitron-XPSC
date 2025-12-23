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
    // sort(a.begin(),a.end());
    ll sum = 0;
    for (int i = 1; i < n; i++)
        sum += abs(a[i - 1] - a[i]);
    // ll mx = LLONG_MIN;
    ll first = abs(a[0] - a[1]);
    ll last = abs(a[n - 2] - a[n - 1]);
    ll mx = max(first, last);
    for (int i = 1; i < n - 1; i++)
    {
        ll pi = abs(a[i - 1] - a[i]);
        ll ip = abs(a[i] - a[i + 1]);
        ll pp = abs(a[i - 1] - a[i + 1]);
        ll res = pi + ip - pp;
        mx = max(mx, res);
    }
    cout << sum - mx << nl;
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