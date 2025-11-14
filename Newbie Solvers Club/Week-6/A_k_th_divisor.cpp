#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<ll> d;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            d.push_back(i);
            if (n / i != i)
                d.push_back(n / i);
        }
    }
    sort(d.begin(), d.end());
    if (k <= d.size())
        cout << d[k - 1];
    else
        cout << -1;

    return 0;
}