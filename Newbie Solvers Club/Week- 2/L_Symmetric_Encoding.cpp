#include<bits/stdc++.h>
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
        string s, r;
        cin >> s;
        map<char, bool> mp;
        for (int i = 0; i < n; i++)
        {
            if(mp.find(s[i]) == mp.end())
            {
                mp[s[i]] = true;
                r.insert(r.end(), s[i]);
            }
        }
        sort(r.begin(), r.end());
        for (int i = 0; i < n; i++)
        {
            int idx = r.find(s[i]);
            s[i] = r[r.size() - 1 - idx];
        }
        cout << s << endl;
    }
    

    return 0;
}