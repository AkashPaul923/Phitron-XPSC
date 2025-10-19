#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1), ans(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    set<int> st;
    for (int i = n; i > 0; i--)
    {
        st.insert(v[i]);
        ans[i] = st.size();
    }
    while (m--)
    {
        int l;
        cin >> l;
        cout << ans[l] << endl;
    }

    return 0;
}