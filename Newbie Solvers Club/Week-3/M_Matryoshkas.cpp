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
        multiset<int> st;
        while (n--)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        int count = 0;
        while (!st.empty())
        {
            int val = *st.begin() + 1;
            st.erase(st.begin());
            count++;
            while (st.find(val) != st.end())
            {
                st.erase(st.find(val));
                val++;
            }
        }
        cout << count << endl;
    }

    return 0;
}