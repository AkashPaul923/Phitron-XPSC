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
    ll ans = 0, l = 0, r = 0;
    multiset<ll> ml;
    while (r < n)
    {
        ml.insert(a[r]);
        ll mn, mx;
        mn = *ml.begin(), mx = *ml.rbegin();
        if (mx - mn <= x)
        {
            ans += r - l + 1;
        }
        else
        {
            while (l <= r)
            {
                mn = *ml.begin(), mx = *ml.rbegin();
                if (mx - mn <= x)
                {
                    break;
                }
                ml.erase(ml.find(a[l]));
                l++;
            }
            mn = *ml.begin(), mx = *ml.rbegin();
            if (mx - mn <= x)
            {
                ans += r - l + 1;
            }
        }
        r++;
    }
    cout << ans;

    return 0;
}