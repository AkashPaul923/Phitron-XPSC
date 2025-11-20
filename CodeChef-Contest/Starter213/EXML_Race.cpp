#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'

void solve()
{
    int n;
    cin >> n;
    priority_queue<pair<int, int>> pq;
    for (int i = 1; i <= n; i++)
    {
        int d, t;
        cin >> d >> t;
        pq.push({(d / t), -i});
    }
    auto it = pq.top();
    cout << -it.second << nl;
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