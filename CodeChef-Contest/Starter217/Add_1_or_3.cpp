#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    int n, m;
    cin >> n >> m;
    if (m < n)
    {
        no;
        return;
    }
    if ((m - n) % 2)
    {
        no;
        return;
    }
    if ((m - n) / 2 > n)
    {
        no;
        return;
    }
    yes;
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