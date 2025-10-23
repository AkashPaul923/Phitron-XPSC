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
        int n;
        cin >> n;
        map<string, long long int> mp;
        vector<pair<string, long long int>> v;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            mp[s]++;
        }
        for (auto [x, y] : mp)
        {
            v.push_back({x, y});
        }
        long long int count = 0;
        for (int i = 0; i < v.size() - 1; i++)
        {
            for (int j = i + 1; j < v.size(); j++)
            {
                if (v[i].first[0] == v[j].first[0] && v[i].first[1] != v[j].first[1])
                    count += (v[i].second * v[j].second);
                else if (v[i].first[0] != v[j].first[0] && v[i].first[1] == v[j].first[1])
                    count += (v[i].second * v[j].second);
            }
        }

        cout << count << endl;
    }

    return 0;
}