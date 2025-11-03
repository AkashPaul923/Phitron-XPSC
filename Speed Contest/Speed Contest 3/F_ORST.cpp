#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        sort(v.begin() + (n - pq.top()), v.end());
        for (int vl : v)
            cout << vl << " ";
        cout << endl;
    }

    return 0;
}