#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mx = 0, cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] <= a[i])
            cnt++;
        else
            cnt = 1;
        mx = max(mx, cnt);
    }
    for (int i = 0; i < n; i++)
    {
        int ans = a[i], count = 1;
        a[i] *= x;
        for (int j = 1; j < n; j++)
        {
            if (a[j - 1] <= a[j])
                count++;
            else
                count = 1;
            mx = max(mx, count);
        }
        a[i] = ans;
    }
    cout << mx << nl;
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
