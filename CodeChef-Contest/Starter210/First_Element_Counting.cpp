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
        int n;
        cin >> n;
        vector<int> v(n);
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            st.insert(v[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] == *st.begin() || v[i] == *st.rbegin())
            {
                cout << -1 << " ";
            }
            else
            {
                int l = *--st.find(v[i]);
                int r = *++st.find(v[i]);
                cout << (v[i] - l + 1) / 2 + (r - v[i]) / 2 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}