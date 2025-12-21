#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n, y;
    cin >> n >> y;
    set<int> st;
    while (n--)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    cout << (st.size() * 3) - y << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}