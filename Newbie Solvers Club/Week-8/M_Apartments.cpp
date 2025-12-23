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

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans = 0, i = 0, j = 0;
    while (i < n && j < m)
    {
        if (abs(a[i] - b[j]) <= k)
            ans++, i++, j++;
        else if (a[i] < b[j])
            i++;
        else
            j++;
    }
    cout << ans;

    return 0;
}