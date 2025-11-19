#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'

bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        ll count = 0;
        vector<ll> v(2);
        while (count < 2)
        {
            if (isPrime(x))
            {
                v[count] = x;
                count++;
            }
            x++;
        }
        cout << v[0] * v[1] << endl;
    }

    return 0;
}