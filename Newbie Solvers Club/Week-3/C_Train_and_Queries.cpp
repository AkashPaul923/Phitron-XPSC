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
        int n, m;
        cin >> n >> m;
        map<int, set<int>> mp;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            mp[x].insert(i);
        }
        while (m--)
        {
            int a, b;
            cin >> a >> b;
            if ((mp.find(a) == mp.end()) || (mp.find(b) == mp.end()))
            {
                cout << "NO\n";
            }
            else
            {
                int l = *mp[a].begin();
                int r = *mp[b].rbegin();
                if (l < r)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
        }
    }

    return 0;
}