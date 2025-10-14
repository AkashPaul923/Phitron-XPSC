#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    map<string, int> mp;
    while (t--)
    {
        string s;
        cin >> s;
        if (mp.find(s) == mp.end())
        {
            mp[s]++;
            cout << "OK\n";
        }
        else
        {
            cout << s << mp[s] << "\n";
            mp[s]++;
        }
    }

    return 0;
}