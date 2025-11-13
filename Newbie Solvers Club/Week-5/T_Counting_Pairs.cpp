#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, y, total = 0;
        cin >> n >> x >> y;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total += a[i];
        }
        ll ans = 0, L = total - y, R = total - x;
        pbds<ll> p;
        for (int i = 0; i < n; i++)
        {
            ll l = L - a[i], r = R - a[i];
            ans += p.order_of_key(r + 1) - p.order_of_key(l);
            p.insert(a[i]);
        }
        cout << ans << endl;
    }

    return 0;
}