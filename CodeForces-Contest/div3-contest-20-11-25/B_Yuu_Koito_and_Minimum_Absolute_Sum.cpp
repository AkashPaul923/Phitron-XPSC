#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    if (a[0] == -1 && a[n - 1] == -1)
        a[0] = 0, a[n - 1] = 0;
    else if (a[0] == -1)
        a[0] = a[n - 1];
    else if (a[n - 1] == -1)
        a[n - 1] = a[0];
        
    cout << abs(a[0] - a[n - 1]) << nl;
    for (ll i = 0; i < n; i++)
        cout << (a[i] == -1 ? 0 : a[i]) << " ";
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