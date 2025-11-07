#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0, l = 0, r = 0, sum = 0;
    while (r < n)
    {
        sum += a[r];
        if (sum <= x)
        {
            ans += r - l + 1;
        }
        else
        {
            while (sum > x)
            {
                sum -= a[l];
                l++;
            }
            if (sum <= x)
            {
                ans += r - l + 1;
            }
        }
        r++;
    }
    cout << ans;

    return 0;
}