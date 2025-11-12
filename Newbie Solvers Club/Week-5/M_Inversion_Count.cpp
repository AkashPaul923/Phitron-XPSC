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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        pbds<int> p;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            p.insert(v[i]);
        }
        ll count = 0;
        for (int i = 0; i < n; i++)
        {
            count += p.order_of_key(v[i]);
            p.erase(v[i]);
        }
        cout << count << endl;
    }

    return 0;
}