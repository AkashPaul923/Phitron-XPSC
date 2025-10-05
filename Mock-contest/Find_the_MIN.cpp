#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<int, vector<int>, greater<int>> pq;

    int t;
    cin >> t;
    while (t--)
    {
        int c;
        cin >> c;
        if (c == 1)
        {
            int val;
            cin >> val;
            if (pq.empty())
                pq.push(val);
            else if (pq.top() != val)
                pq.push(val);
        }
        else
        {
            if (!pq.empty())
            {
                cout << pq.top() << "\n";
                pq.pop();
            }
            else
            {
                cout << "empty\n";
            }
        }
    }

    return 0;
}