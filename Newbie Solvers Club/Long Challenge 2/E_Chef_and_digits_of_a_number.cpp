#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    string s;
    cin >> s;
    int cnt0 = count(s.begin(), s.end(), '0');
    int cnt1 = s.size() - cnt0;
    if (cnt0 == 1 || cnt1 == 1)
        yes;
    else
        no;
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