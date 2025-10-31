#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, e;
    cin >> n >> e;
    map<ll, ll> sum_fre;
    sum_fre[0] = 1;
    ll sum = 0, ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        ans += sum_fre[sum - e];
        sum_fre[sum]++;
    }
    cout << ans;

    return 0;
}