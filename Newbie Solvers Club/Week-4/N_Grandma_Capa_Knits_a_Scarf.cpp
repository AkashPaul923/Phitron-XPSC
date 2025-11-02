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
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll mn = INT_MAX;
        for (char i = 'a'; i <= 'z'; i++)
        {
            bool ok = true;
            int l = 0, r = n - 1;
            ll count = 0;
            while (l <= r)
            {
                if (s[l] == s[r])
                {
                    l++;
                    r--;
                }
                else if (s[l] == i)
                {
                    count++;
                    l++;
                }
                else if (s[r] == i)
                {
                    count++;
                    r--;
                }
                else
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
                mn = min(mn, count);
        }
        if (mn == INT_MAX)
            cout << -1 << endl;
        else
            cout << mn << endl;
    }

    return 0;
}