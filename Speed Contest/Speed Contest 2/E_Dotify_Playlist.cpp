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
        int n, k, l;
        cin >> n >> k >> l;
        priority_queue<int> pq;
        while (n--)
        {
            int x, y;
            cin >> x >> y;
            if (y == l)
                pq.push(x);
        }

        if (pq.size() < k)
            cout << -1 << endl;
        else
        {
            int sum = 0;
            while (k--)
            {
                sum += pq.top();
                pq.pop();
            }
            cout << sum << endl;
        }
    }

    return 0;
}