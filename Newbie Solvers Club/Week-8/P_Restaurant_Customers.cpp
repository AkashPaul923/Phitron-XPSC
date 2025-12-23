#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<int, int> mp;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        mp[a]++;
        mp[b + 1]--;
    }
    int cnt = 0, ans = 0;
    for (auto [k, v] : mp)
    {
        cnt += v;
        ans = max(cnt, ans);
    }
    cout << ans;

    return 0;
}