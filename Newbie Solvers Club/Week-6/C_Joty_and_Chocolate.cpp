#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll LCM(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, a, b, x, y;
    cin >> n >> a >> b >> x >> y;
    ll cnt1 = (n / a) * x, cnt2 = (n / b) * y, over = (n / LCM(a, b)) * min(x , y);
    cout << cnt1 + cnt2 - over;

    return 0;
}