#include <bits/stdc++.h>
using namespace std;

int gcd(long long int a, long long int b)
{
    while (b != 0)
    {
        long long int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

void solve()
{
    int n;
    cin >> n;
    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (long long i = 2; i <= 1e18; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (gcd(v[j], i) == 1)
            {
                cout << i << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}