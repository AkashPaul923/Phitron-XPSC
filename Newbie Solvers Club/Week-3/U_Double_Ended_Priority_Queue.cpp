#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    multiset<int> ms;
    while (n--)
    {
        int x;
        cin >> x;
        ms.insert(x);
    }
    while (q--)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            int v;
            cin >> v;
            ms.insert(v);
        }
        else if (c == 1)
        {
            cout << *ms.begin() << endl;
            ms.erase(ms.begin());
        }
        else
        {
            cout << *(--ms.end()) << endl;
            ms.erase(--ms.end());
        }
    }

    return 0;
}