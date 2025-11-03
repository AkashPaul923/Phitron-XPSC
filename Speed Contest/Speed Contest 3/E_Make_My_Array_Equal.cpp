#include <bits/stdc++.h>
using namespace std;
#define ll long long int

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
        map<int, int> mp;
        while (n--)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        int count = 0;
        for (auto [key, val] : mp)
        {
            if (key != 0)
                count++;
        }
        cout << (count > 1 ? "NO" : "YES") << endl;
    }

    return 0;
}