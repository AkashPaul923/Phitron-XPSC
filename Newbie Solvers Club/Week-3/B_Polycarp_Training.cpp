#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> st;
    while (n--)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    int day = 1;
    while (!st.empty())
    {
        auto lb = st.lower_bound(day);
        if (lb == st.end())
            break;
        day++;
        st.erase(lb);
    }
    cout << day - 1;

    return 0;
}