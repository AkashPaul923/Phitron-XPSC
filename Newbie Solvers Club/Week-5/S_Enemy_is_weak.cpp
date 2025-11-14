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

    int n;
    cin >> n;
    vector<ll> a(n), v(n);
    pbds<ll> p1, p2;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        v[i] = p1.order_of_key(a[i]);
        p1.insert(a[i]);
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ll large = p2.size() - p2.order_of_key(a[i]);
        ans += v[i] * large;
        p2.insert(a[i]);
    }
    cout << ans;

    return 0;
}