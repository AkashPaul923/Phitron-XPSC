#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> mp;
    for (int i = 0; i < n - 1; i++)
    {
        mp[s.substr(i, 2)]++;
    }
    pair<string, int> ans = {"", 0};
    for (auto [x, y] : mp)
    {
        if (y > ans.second)
        {
            ans.first = x;
            ans.second = y;
        }
    }
    cout << ans.first;

    return 0;
}