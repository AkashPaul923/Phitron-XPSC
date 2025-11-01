#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<ll> p(n + 1);
        ll sum = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> p[i];
            sum += p[i];
            p[i] += p[i - 1];
        }
        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            ll temp = sum - (p[r] - p[l - 1]) + (r - l + 1) * k;
            if (temp % 2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}