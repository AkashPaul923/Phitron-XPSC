#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int i = 0, j = 0;
    long long ans = 0;
    while (i < n && j < m)
    {
        int curr = a[i], cnt1 = 0, cnt2 = 0;
        while (i < n && a[i] == curr)
        {
            cnt1++, i++;
        }
        while (j < m && curr > b[j])
        {
            j++;
        }
        while (j < m && b[j] == curr)
        {
            cnt2++, j++;
        }
        ans += 1LL * cnt1 * cnt2;
    }
    cout << ans;

    return 0;
}

