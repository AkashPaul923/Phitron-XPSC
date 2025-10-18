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
        int n, idx = 0;
        cin >> n;
        deque<int> v;
        int val;
        cin >> val;
        v.push_back(val);
        for (int i = 1; i < n; i++)
        {
            int x;
            cin >> x;
            int r = v.size() - idx - 1;
            int l = idx;
            if (l <= r)
            {
                v.push_front(x);
                idx++;
            }
            else
            {
                v.push_back(x);
            }
        }
        for (int vl : v)
            cout << vl << " ";
        cout << endl;
    }

    return 0;
}