#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define M 1000000007

ll my_pow(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll res = my_pow(a, b / 2);
    if (b % 2)
        return (a * res * res) % M;
    else
        return (res * res) % M;
}

void solve()
{
    ll n;
    cin >> n;
    ll ans = my_pow(2, n - 1) % M;
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