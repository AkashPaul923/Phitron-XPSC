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
        multiset<long long int> st;
        long long int ans = 0;
        while (n--)
        {
            int x;
            cin >> x;
            if (x == 0)
            {
                if (!st.empty())
                {
                    ans += *st.rbegin();
                    st.erase(--st.end());
                }
            }
            else
            {
                st.insert(x);
            }
        }
        cout << ans << endl;
    }

    return 0;
}