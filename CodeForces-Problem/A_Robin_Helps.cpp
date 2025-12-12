#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n, k;
    cin >> n >> k;
    int cnt0 = 0, sum = 0;
    while (n--)
    {
        int x;
        cin >> x;
        if (sum > 0 && x == 0)
            cnt0++, sum--;
        else if (x >= k)
            sum += x;
    }
    cout << cnt0 << nl;
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