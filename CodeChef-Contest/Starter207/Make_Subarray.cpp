#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        map<int, pair<int, int>> mp;
        for (int i = 0; i < n; i++)
        {
            if (mp.find(s[i] - '0') == mp.end())
            {
                mp[s[i] - '0'] = {i, i};
            }
            else
            {
                mp[s[i] - '0'].second = i;
            }
        }
        int count = 0;
        if (mp.find(1) == mp.end())
        {
            cout << "0" << endl;
        }
        else
        {
            for (int i = mp[1].first; i <= mp[1].second; i++)
            {
                if (s[i] == '0')
                    count++;
            }
            cout << count << endl;
        }
    }

    return 0;
}