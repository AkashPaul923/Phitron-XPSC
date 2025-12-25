#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n, b;
    cin >> n >> b;
    bool buy = false;
    int screen = 0;
    while (n--)
    {
        int h, w, p;
        cin >> h >> w >> p;
        if (p <= b)
        {
            buy = true;
            screen = max(screen, h * w);
        }
    }
    if (buy)
    {
        cout << screen << nl;
        return;
    }
    cout << "no tablet" << nl;
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
