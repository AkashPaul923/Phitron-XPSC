#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    multiset<int> mst;
    int n, m;
    cin >> n >> m;
    while (n--)
    {
        int x;
        cin >> x;
        mst.insert(-x);
    }
    while (m--)
    {
        int x;
        cin >> x;
        auto it = mst.lower_bound(-x);
        if (it == mst.end())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << -*it << endl;
            mst.erase(it);
        }
    }

    return 0;
}