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
    string s;
    cin >> s;
    int zero = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            zero++;
    }
    vector<int> v(k, 0);
    for (int i = 0; i < n; i++)
    {
        v[i % k]++;
    }
    int mn = 0, mx = 0;
    for (int i = 0; i < k; i++)
    {
        mn += (v[i] / 2);
        mx += ((v[i] + 1) / 2);
        // cout << v[i] << " ";
    }
    if (zero >= mn && zero <= mx)
        yes;
    else
        no;

    // cout << nl;
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
