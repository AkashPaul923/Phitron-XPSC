#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int x;
    cin >> x;
    int i = 0, b = 0;
    while (pow(2, i) <= x)
    {
        b = pow(2, i);
        i++;
    }
    int a = x - b;
    cout << a << " " << b << nl;
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