#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    pbds<pair<ll, int>> p;
    int l = 0, r = 0;
    // ll sum = 0;
    while (r < n)
    {
        p.insert({a[r], r});
        if (r - l + 1 == k)
        {
            auto mn = p.begin();
            auto mx = p.rbegin();
            cout << mx->first -  mn->first << " ";
            p.erase({a[l], l});
            l++;
        }
        r++;
    }

    return 0;
}