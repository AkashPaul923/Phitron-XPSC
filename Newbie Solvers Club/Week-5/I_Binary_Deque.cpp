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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll l = 0, r = 0, sum = 0, mx = INT_MIN;
        while (r < n)
        {
            sum += v[r];
            if (sum == k)
                mx = max(mx, r - l + 1);
            while (sum > k && l < r)
            {
                sum -= v[l];
                l++;
            }
            r++;
        }
        cout << (mx == INT_MIN ? -1 : n - mx) << endl;
    }

    return 0;
}