#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ll l = 0, r = 0, sum = 0, count = 0;
    while (r < n)
    {
        while (r < n && sum < x)
        {
            sum += a[r];
            r++;
        }
        while (l < n && sum > x)
        {
            sum -= a[l];
            l++;
        }
        if (sum == x)
        {
            count++;
            sum -= a[l];
            l++;
        }
    }
    cout << count;

    return 0;
}