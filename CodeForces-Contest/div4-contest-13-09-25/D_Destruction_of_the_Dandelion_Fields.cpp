#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x % 2 == 0)
                sum += x;
            else
                v.push_back(x);
        }
        int k = v.size();
        if (k > 1)
            k = k / 2;
        sort(v.begin(), v.end(), greater<ll>());
        for (int i = 0; i < k; i++)
        {
            sum += v[i];
        }
        if (k == 0)
            cout << 0 << endl;
        else
            cout << sum << endl;
    }

    return 0;
}