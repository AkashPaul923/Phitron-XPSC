#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<pair<int, int>, string> mp;
    while (n--)
    {
        int x, y;
        string s;
        cin >> x >> y >> s;
        mp[{x, y}] = s;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << mp[{a, b}] << endl;
    }

    return 0;
}