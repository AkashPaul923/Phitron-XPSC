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
        int n, k;
        cin >> n >> k;
        vector<ll> a(n), h(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> h[i];
        ll l = 0, r = 0;
        ll sum = 0, ans = 0;
        while (r < n)
        {
            sum += a[r];
            if (r + 1 < n && h[r] % h[r + 1] != 0)
            {
                if (sum <= k)
                    ans = max(ans, r - l + 1);
                l = r + 1;
                sum = 0;
            }
            else
            {
                while (sum > k && l <= r)
                {
                    sum -= a[l];
                    l++;
                }
                if (sum <= k)
                    ans = max(ans, r - l + 1);
            }
            r++;
        }
        cout << ans << endl;
    }

    return 0;
}