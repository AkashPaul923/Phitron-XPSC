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
    vector<int> a(n), b(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> b[i];
    }

    a[0] = b[0];
    a[n - 1] = b[n - 2];
    for (int i = 1; i < n - 1; i++)
    {
        a[i] = (b[i] | b[i - 1]);
    }

    bool ok = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (b[i] != (a[i] & a[i + 1]))
        {
            ok = false;
            break;
        }
    }

    if (ok)
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
    else
    {
        cout << -1;
    }
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