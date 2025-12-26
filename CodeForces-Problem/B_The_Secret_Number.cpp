#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    ll r, d = 11;
    cin >> r;
    vector<ll> ans;
    while (r >= d)
    {
        if (r % d == 0)
            ans.push_back(r / d);
        d = (d - 1) * 10 + 1;
    }
    cout << ans.size() << nl;
    reverse(ans.begin(), ans.end());
    for (auto a : ans)
        cout << a << " ";
    cout << nl;
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
