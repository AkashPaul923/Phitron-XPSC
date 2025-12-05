#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == 0 || b == 0 || c == 0 || d == 0)
        yes;
    else if (a + b == 0 || a + c == 0 || a + d == 0 || b + c == 0 || b + d == 0 || c + d == 0)
        yes;
    else if (a + b + c == 0 || a + b + d == 0 || a + c + d == 0 || b + c + d == 0)
        yes;
    else if (a + b + c + d == 0)
        yes;
    else
        no;
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