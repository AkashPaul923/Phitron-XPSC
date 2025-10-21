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
        int n, m;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;
            if (s.size() != n)
            {
                cout << "NO\n";
            }
            else
            {
                map<char, int> mp1;
                map<int, char> mp2;
                bool isConsistance = false;
                for (int i = 0; i < n; i++)
                {
                    if (mp1.find(s[i]) == mp1.end() && mp2.find(v[i]) == mp2.end())
                    {
                        mp1[s[i]] = v[i];
                        mp2[v[i]] = s[i];
                    }
                    else
                    {
                        if (mp2[v[i]] != s[i])
                        {
                            isConsistance = true;
                            break;
                        }
                    }
                }
                if (isConsistance)
                    cout << "NO\n";
                else
                    cout << "YES\n";
            }
        }
    }

    return 0;
}