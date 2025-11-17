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
        ll n, k;
        cin >> n >> k;
        ll s = n / k;
        for (ll i = 0; i < k; i++)
        {
            cout << s << " ";
            s += n / k;
        }
        cout << nl;
    }

    return 0;
}