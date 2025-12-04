#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int a[3];
    for (int i = 0; i < 3; i++)
        cin >> a[i];
    sort(a, a + 3);
    int ans = a[0] * 10;
    ans += (a[1] - a[0]) * 3;
    ans += (a[2] - a[0]) * 3;
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