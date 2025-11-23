#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
const int B = 30;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> bits(B + 1);
    for (int i = 0; i < n; i++)
    {
        for (int k = B; k >= 0; k--)
        {
            if ((a[i] >> k) & 1)
            {
                bits[k]++;
            }
        }
    }
    ll ans = 0;
    for (int k = B; k >= 0; k--)
    {
        if (bits[k] == n)
        {
            ans += (1LL << k);
        }
        else
        {
            int need = n - bits[k];
            if (need <= x)
            {
                ans += (1LL << k);
                x -= need;
            }
        }
    }
    cout << ans << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}