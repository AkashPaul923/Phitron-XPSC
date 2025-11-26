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
    if (n < 4)
    {
        cout << 0 << nl;
    }
    else
    {
        int ans = 0;
        int i = n - 3;
        while (i > 0)
        {
            ans += i;
            i -= 2;
        }
        cout << ans << nl;
    }
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