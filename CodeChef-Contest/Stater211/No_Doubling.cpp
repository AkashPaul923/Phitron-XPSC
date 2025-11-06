#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, s = 0;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        if (v[0] == v[1] && n > 2)
            swap(v[0], v[n - 1]);
        for (auto vl : v)
            cout << vl << " ";
        cout << endl;
    }

    return 0;
}