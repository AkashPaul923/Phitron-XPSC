#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q, total = 0;
        cin >> n >> k >> q;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll val;
            cin >> val;
            if (val <= q)
            {
                total++;
            }
            else
            {
                if (total > 0)
                {
                    v.push_back(total);
                    total = 0;
                }
            }
        }
        if (total > 0)
            v.push_back(total);
        ll ans = 0;
        for (auto x : v)
        {
            if (x >= k)
                ans += ((x - k + 1) * (x - k + 2)) / 2;
        }
        cout << ans << endl;
    }

    return 0;
}