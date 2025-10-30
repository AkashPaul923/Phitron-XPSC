#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int l = 0, r = 0, op = 0, mn = INT_MAX;
        while (r < n)
        {
            if (s[r] == 'W')
                op++;
            if (r - l + 1 == k)
            {
                mn = min(mn, op);
                if (s[l] == 'W')
                    op--;
                l++;
            }
            r++;
        }
        cout << mn << endl;
    }

    return 0;
}