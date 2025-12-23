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
    vector<pair<int, int>> d(n);
    for (int i = 0; i < n; i++)
    {
        cin >> d[i].second >> d[i].first;
    }
    sort(d.begin(), d.end());
    int ans = 0, last = 0;
    for (auto [end, start] : d)
    {
        if (start >= last)
        {
            ans++;
            last = end;
        }
    }
    cout << ans;

    return 0;
}