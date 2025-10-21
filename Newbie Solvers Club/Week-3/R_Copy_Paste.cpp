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
        set<int> st;
        int n;
        cin >> n;
        while (n--)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        cout << st.size() << endl;
    }

    return 0;
}