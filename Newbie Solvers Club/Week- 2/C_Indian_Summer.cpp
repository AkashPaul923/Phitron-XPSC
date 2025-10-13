#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<pair<string, string>, bool> mp;
    while (n--)
    {
        string k, v;
        cin >> k >> v;
        mp[{k, v}] = true;
    }
    cout << mp.size();

    return 0;
}