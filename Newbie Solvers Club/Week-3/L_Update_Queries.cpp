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
        string s, c;
        cin >> n >> m >> s;
        set<int> mst;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            mst.insert(x);
        }
        cin >> c;
        sort(c.begin(), c.end());
        vector<int> v;
        for(auto m : mst)
        {
            v.push_back(m);
        }
        for (int i = 0; i < v.size(); i++)
        {
            s[v[i] - 1] = c[i];
            mst.erase(mst.begin());
        }
        cout << s ;
        cout << endl;
    }

    return 0;
}