#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    string tmp = str;
    sort(tmp.begin(), tmp.end());
    if (tmp == str)
    {
        cout << 0 << nl;
        return;
    }
    cout << 1 << nl;
    vector<int> idx;
    for (int i = 0; i < n; i++)
    {
        if (tmp[i] != str[i])
        {
            idx.push_back(i + 1);
        }
    }
    cout << idx.size() << " ";
    for (int i : idx)
    {
        cout << i << " ";
    }
    cout << nl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}