#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n + 1);
        ll even, odd;
        if (n % 2 == 0)
        {
            even = n;
            odd = n - 1;
        }
        else
        {
            odd = n;
            even = n - 1;
        }
        for (ll i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                v[i] = even;
                even -= 2;
            }
            else
            {
                v[i] = odd;
                odd -= 2;
            }
        }

        for (ll i = 1; i <= n; i++)
        {
            cout << v[i] << " ";
        }
        cout << nl;
    }

    return 0;
}