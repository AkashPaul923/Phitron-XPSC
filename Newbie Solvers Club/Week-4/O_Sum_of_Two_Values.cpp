#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (mp.find(x - a) != mp.end())
        {
            cout << mp[x - a] + 1 << " " << i + 1;
            return 0;
        }
        else
        {
            mp[a] = i;
        }
    }

    cout << "IMPOSSIBLE";

    return 0;
}