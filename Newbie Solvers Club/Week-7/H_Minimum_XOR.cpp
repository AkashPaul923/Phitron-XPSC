#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int txor = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        txor ^= a[i];
    }
    int ans = txor;
    for (int i = 0; i < n; i++)
    {
        int x = a[i] ^ txor;
        if (ans > x)
            ans = x;
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