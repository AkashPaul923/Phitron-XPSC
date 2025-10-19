#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector< priority_queue<int> > v(n + 1);
    while (q--)
    {
        int c, t;
        cin >> c >> t;
        if (c == 0)
        {
            int x;
            cin >> x;
            v[t].push(x);
        }
        else if (c == 1)
        {
            if (!v[t].empty())
                cout << v[t].top() << "\n";
        }
        else
        {
            if (!v[t].empty())
                v[t].pop();
        }
    }

    return 0;
}