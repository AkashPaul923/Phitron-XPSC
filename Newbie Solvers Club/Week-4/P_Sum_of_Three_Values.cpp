#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        v.push_back({a, i});
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        int l = 0, r = n - 1;
        while (l != r)
        {
            int req = x - v[i].first;
            if (l != i && r != i && v[l].first + v[r].first == req)
            {
                cout << v[i].second << " " << v[l].second << " " << v[r].second;
                return 0;
            }
            if (v[l].first + v[r].first < req)
                l++;
            else
                r--;
        }
    }

    cout << "IMPOSSIBLE";

    return 0;
}