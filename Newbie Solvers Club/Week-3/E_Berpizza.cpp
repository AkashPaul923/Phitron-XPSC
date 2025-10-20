#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, i = 1;
    cin >> n;
    set<pair<int, int>> st;
    multiset<pair<int, int>> mst;
    vector<int> ans;
    while (n--)
    {
        int c;
        cin >> c;
        if (c == 1)
        {
            int m;
            cin >> m;
            st.insert({i, m});
            mst.insert({m, -i});
            i++;
        }
        else if (c == 2)
        {
            int pos = st.begin()->first, mon = st.begin()->second;
            ans.push_back(pos);
            st.erase(st.begin());
            mst.erase({mon, -pos});
        }
        else
        {
            int mon = mst.rbegin()->first, pos = -mst.rbegin()->second;
            ans.push_back(pos);
            mst.erase(--mst.end());
            st.erase({pos, mon});
        }
    }
    for (int a : ans)
        cout << a << " ";

    return 0;
}