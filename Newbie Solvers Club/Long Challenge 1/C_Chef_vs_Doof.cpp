#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'

void solve()
{
    int n, x;
    cin >> n;
    bool even = false;
    while (n--)
    {
        cin >> x;
        if (x % 2 == 0)
            even = true;
    }
    if (even)
        cout << "NO\n";
    else
        cout << "YES\n";
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