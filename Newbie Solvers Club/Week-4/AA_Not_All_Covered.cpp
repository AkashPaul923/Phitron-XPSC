#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<ll> d(n + 2);
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        d[l]++, d[r + 1]--;
    }
    for (int i = 2; i <= n; i++)
    {
        d[i] += d[i - 1];
    }
    ll mn = LLONG_MAX;
    for (int i = 1; i <= n; i++)
    {
        mn = min(d[i], mn);
    }
    cout << mn;

    return 0;
}