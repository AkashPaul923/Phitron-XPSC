#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n + 1), p(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            p[i] = p[i - 1] + a[i];
        }
        string s;
        cin >> s;
        int l = 0, r = n - 1;
        ll sum = 0;
        while (l < r)
        {
            if (l < r && s[l] == 'L' && s[r] == 'R')
            {
                sum += p[r + 1] - p[l];
                l++;
                r--;
            }
            else if (s[r] != 'R')
            {
                r--;
            }
            else if (s[l] != 'L')
            {
                l++;
            }
        }
        cout << sum << endl;
    }

    return 0;
}