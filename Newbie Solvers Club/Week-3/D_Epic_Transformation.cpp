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
        map<int, int> mp;
        int n;
        cin >> n;
        while (n--)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        priority_queue<int> pq;
        for (auto [k, v] : mp)
            pq.push(v);
        while (pq.size() > 1)
        {
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();
            first--;
            second--;
            if (first > 0)
                pq.push(first);
            if (second > 0)
                pq.push(second);
        }
        int ans = 0;
        while (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        cout << ans << endl;
    }

    return 0;
}