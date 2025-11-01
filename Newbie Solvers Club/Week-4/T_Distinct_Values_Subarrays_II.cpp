#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<ll, ll> mp;
    ll d = 0, count = 0, l = 0, r = 0;
    while (r < n)
    {
        if (mp[a[r]] == 0)
            d++;
        mp[a[r]]++;
        while (d > x)
        {
            mp[a[l]]--;
            if (mp[a[l]] == 0)
                d--;
            l++;
        }
        count += r - l + 1;
        r++;
    }
    cout << count;

    return 0;
}