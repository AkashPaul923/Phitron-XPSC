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

    int n, k;
    cin >> n >> k;
    pbds<int> q;
    for (int i = 1; i <= n; i++)
        q.insert(i);

    int idx = k % n;
    while (n--)
    {
        auto it = q.find_by_order(idx);
        cout << *it << " ";
        q.erase(it);

        if (n)
            idx = (idx + k) % n;
    }

    return 0;
}