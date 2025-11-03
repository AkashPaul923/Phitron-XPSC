#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    map<string, bool> mp;
    for (int i = n - 1; i >= 0; i--)
    {
        string str = v[i];
        int sz = str.size();
        if (mp[str] == false)
        {
            mp[str] = true;
            cout << str[sz - 2] << str[sz - 1];
        }
    }

    return 0;
}