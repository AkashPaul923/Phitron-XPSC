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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        int team = 0;
        for (int i = 1; i <= 100; i++)
        {
            int l = 0, r = n - 1, curr = 0;
            while (l < r)
            {
                int total = a[l] + a[r];
                if (total == i)
                {
                    curr++;
                    l++;
                    r--;
                }
                else if (total > i)
                {
                    r--;
                }
                else if (total < i)
                {
                    l++;
                }
            }
            team = max(team, curr);
        }
        cout << team << endl;
    }

    return 0;
}