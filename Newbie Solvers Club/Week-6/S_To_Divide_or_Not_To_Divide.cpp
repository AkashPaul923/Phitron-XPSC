#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        if (a % b == 0)
        {
            cout << -1 << endl;
            continue;
        }
        ll ans = ((n + a - 1) / a) * a;
        while (true)
        {
            if (ans % b != 0)
            {
                cout << ans << endl;
                break;
            }
            ans += a;
        }
    }

    return 0;
}