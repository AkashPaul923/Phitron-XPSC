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
    string s;
    cin >> s;
    bool isAvail = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != 'z')
        {
            isAvail = true;
        }
    }
    if (!isAvail)
    {
        cout << -1 << nl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << "z";
        }
        cout << nl;
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
