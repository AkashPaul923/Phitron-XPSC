#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> a(n), idx(n + 1);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        idx[a[i]] = i;
    }
    ll ans = 1;
    for (ll i = 0; i < n; i++)
    {
        if (idx[i + 1] < idx[i])
            ans++;
    }
    cout << ans;

    return 0;
}