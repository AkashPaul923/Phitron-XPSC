#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<ll> p(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        p[i] = p[i - 1] + a;
    }
    int m;
    cin >> m;
    while (m--)
    {
        int q;
        cin >> q;
        int ans = lower_bound(p.begin(), p.end(), q) - p.begin();
        cout << ans << nl;
    }

    return 0;
}