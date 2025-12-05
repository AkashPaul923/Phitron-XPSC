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
    string a, b;
    cin >> a >> b;
    int a0 = 0, b0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '0')
            a0++;
        if (b[i] == '0')
            b0++;
    }
    if (a0 == b0)
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