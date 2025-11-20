#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    int less = 0, large = 0, equal = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(v[i] < x)
            less++;
        if(v[i] > x)
            large++;
        if(v[i] == x)
            equal++;
    }
    if(less > 0 && large > 0 && equal == 0)
        cout << "No" << nl;
    else
        cout << "Yes" << nl;
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